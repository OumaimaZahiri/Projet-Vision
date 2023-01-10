function Somme=Fonction_Somme(I)    
    A=I;
    A = imresize(A,900/length(A));
    S=2;
    threshRGB = multithresh(A,S);
    value = [0 threshRGB(2:end) 255]; 
    B = imquantize(A, threshRGB, value);
    B=rgb2gray(B);
    
    B = imbinarize(B,0.99);
    
    [centers, radii, metric] = imfindcircles(B,[10 150],"ObjectPolarity","Dark",'EdgeThreshold',0.50);
    
    
    MOYENNE = (zeros(length(centers),2));
    
    Rouges=0;
    RadiusRouges=zeros(length(centers),1);
    ro=1;
    
    Jaunes=0;
    RadiusJaunes=zeros(length(centers),1);
    ja=1;
    
    Deux=0;
    RadiusDeux=zeros(length(centers),1);
    d=1;
    
    Un=0;
    RadiusUn=zeros(length(centers),1);
    u=1;
    
    C1=0;
    C2=0;
    C5=0;
    C10=0;
    C20=0;
    C50=0;
    R=1;
    Rad=1;
    
    for k = 1:length(centers)
        x=(centers(k,1));
        y=(centers(k,2));
        r= abs(radii(k));
        Ar = imcrop(A,[x-r,y-r,2*r,2*r]);
        for i = 1:size(Ar,1)
            for j = 1:size(Ar,2)
                if (abs(i-r)^2+abs(j-r)^2)^0.5 > r
                    Ar(i,j,:)=[255,255,255];
                end
            end
        end
    
        lab_fabric = rgb2lab(Ar);
        a = lab_fabric(:,:,2);
        b = lab_fabric(:,:,3);
        MOYENNE(k,1) = mean2(a);
        MOYENNE(k,2) = mean2(b);
        Ma=mean2(a);
        Mb=mean2(b);
        if Ma<4 && Mb< 15
            "ok"
            for i = 1:size(Ar,1)
                for j = 1:size(Ar,2)
                    if (abs(i-r)^2+abs(j-r)^2)^0.5 > 0.6*r
                        Ar(i,j,:)=[255,255,255];
                    end
                end
            end
            lab_fabric = rgb2lab(Ar);
            b = lab_fabric(:,:,3);
            Mb = mean2(b);
            if Mb>4 
                Deux=Deux+1;
                RadiusDeux(d)=r;
                d=d+1;
            else
                Un=Un+1;
                RadiusUn(u)=r;
                u=u+1;
            end
        
        end
        if Ma < 7 && Mb> 12
            Jaunes=Jaunes+1;
            RadiusJaunes(ja)=r;
            ja=ja+1;
        end
        if Ma > 6 
            Rouges=Rouges+1;
            RadiusRouges(ro)=r;
            ro=ro+1;
        end
            
    end
    RadiusUn(RadiusUn == 0) = NaN; % remplace les 0 par NaN dans la liste
    R1 = mean(RadiusUn, 'omitnan'); 
    if isnan(R1)
       R1 = 0;
    end
    
    RadiusDeux(RadiusDeux == 0) = NaN; % remplace les 0 par NaN dans la liste
    R2 = mean(RadiusDeux, 'omitnan');
    if isnan(R2)
       R2 = 0;
    end
    
    if Un~=0
        Rad=R1;
        R=23.25/2;
    else
        "pas de pièces de un"
        if Deux~0
            Rad=R2;
            R=25.75/2;
        else
            "pas de tampon"
        end
    end
    
    for k = 1:Jaunes
        Rn=RadiusJaunes(k)*R/Rad;
        if 11.55<Rn && Rn<14
            C50=C50+1;
        else
            if 10.6<Rn && Rn<11.55
                C20=C20+1;
            else
                if 9<Rn && Rn<10.6
                    C10=C10+1;
                end
            end
        end
    end
    
    for k = 1:Rouges
        Rn=RadiusRouges(k)*R/Rad;
        if 10<Rn && Rn<15
            C5=C5+1;
        else
            if 9<Rn && Rn<10
                C2=C2+1;
            else
                if 7.5<Rn && Rn<9
                    C1=C1+1;
                end
            end
        end
    
    end
    
    
    Somme = C1*0.01+C2*0.02+C5*0.05+C10*0.10+C20*0.2+C50*0.50+Un*1+Deux*2;

