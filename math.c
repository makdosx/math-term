/*
 * Copyright (c) 2015 Barchampas Gerasimos </makindosx@gmail.com>
 * math-terminal is a program formathematical operations .
 *
 * math-terminal is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 *
 * Anon-chat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License, version 3,
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */
 
 
#include<stdio.h>
#include<math.h>
#include <float.h>
#include <fenv.h>
#include <errno.h>
#define PI 3.14159265
int main()
{
char epilogi;	
char mak;	
char m;
int t;
double t1;
double ef;
double d1,d2;
double ts;
double th;
double tef;
double tef1,tef2;
double ys;
double yh;
double yef;
double yshm;
double yhm; 
double tyef;
double ekth;
int n;
double anap,ypol;
double dyad;
double dyadlog;
double logs;
double klim;
double kiv;
double plev1,plev2;
double sfalma;
double ar1,ar2;
double ar3,ar4,ar5;
double numer = 10.3;
double denom = 4.5;
int quot;
double x,y,z,result2;
double result = remquo (numer,denom,&quot);
const char * format1 = "%.1f \t%.1f \t%.1f \t%.1f \t%.1f\n";
const char * format2 = "%.1f \t%.1f \t%.1f \t%.1f \t%.1f\n";
const char * format = "%.lf \t%.lf \t%.lf \t%.lf \t%.lf\n";	
double d;
double ar;
int	math_errhandling;
int MATH_ERREXCEPT;
int MATH_ERRNO;

    printf ("                   pinakas mathimatikwn sunarthsewn epilekste mathimatikh sunarthsh                    \n");
    printf("                                                                                                        \n");
    printf ("                           (a)  trigwnometrikes sunarthseis                                            \n");      
    printf ("                           (b)  ypervolikes sunarthseis                                                \n");
    printf ("                           (c)  ekthetikes kai logarithmikes leitourgies                               \n");
    printf ("                           (d)  ypologismos leitourgiwn isxys                                          \n");
    printf ("                           (e)  ypologismsos sfalmatwn kai gamma leitourgiwn                           \n");
	printf ("                           (f)  strogulopoihsh kai leitouries upoloipou                                \n");
	printf ("                           (g)  leitourgies diaxeirhshs Floating-point                                 \n");
	printf ("                           (h)  leitourgies elaxisths - megisths diaforas                              \n");
	printf ("                           (i)  ypologismos apolutwn timwn                                             \n");
	printf ("                           (j)  stroggoilopoihseis kai guroi arithmwn                                  \n");
	printf ("                                makroentoles / leitourgies                                             \n"); 
	printf ("                           (+)  makrotaksinomhseis leitourgiwn                                         \n");
	printf ("                           (-)  sugkrish makroleitourgiwn                                              \n");
	printf ("                                makrostatheres leitourgies                                             \n");
    printf ("                           (|)  ypologismos lathwn                                                     \n");
	printf ("                                                                                                       \n");
	printf ("                                   dialekse pedio                                                      \n");
	            scanf("%c",&epilogi);
			   while(epilogi!='n')
	           {
	printf ("                           (a) trigwnometrikes sunarthseis                                            \n");
    printf ("1 (ypologismos sunimhtonou)                       2 (ypologismos hmitonou)                            \n");
    printf ("3 (ypologismos efaptomenhs)                       4 (ypologismos toksou sunimitonou)                  \n");
    printf ("5 (ypologismos toksou hmitonou)                   6 (ypologismos toksou efaptomenhs)                  \n");
    printf ("7 (ypologismos toksou efaptomenhs me 2 parametrous)                                                   \n");
    printf ("                                                                                                      \n");
	printf ("                                 dialekse sunarthsh                                                   \n");
	           	while (epilogi=='a')
				   {	
	  scanf ("%c",&m);
       switch(m)
    {
      case '1':                      
   printf ("upologismos tou sunumitonou \n");
	printf ("dwse sunimitono\n");
	 scanf ("%lf",&t1);	
     printf ("to sunimhtonou tou %lf einai %lf \n",t1,cos(t1));
      break;
       printf("\n");
  printf ("upologismos tou hmitonou \n");
     case '2':
	printf ("dwse hmitono\n");
	 scanf ("%lf",&t1);	
     printf ("to hmitono einai %lf \n",sin(t1));
	 break;
	   printf("\n");
	  case '3':
	  	printf ("upologismos efaptomenhs\n");
	printf ("dwse efaptomenh\n");
	 scanf ("%lf",&ef);	
     printf ("h efaptomenh tou %lf einai %lf \n",ef,tan(ef));
	 break;
	   printf("\n");
	  case '4':
	  	printf ("ypologismos toksou sunimitonou\n");
	printf ("dwse tokso sunimitonou\n");
	 scanf ("%lf",&ts);	
     printf ("to tokso sunhmmitonou tou %lf einai %lf vathmous \n",ts,acos(ts)*180.0/PI);
	 break;
	   printf("\n");
	  case '5':
	  	printf ("ypologismos toksou hmitonou\n");
	printf ("dwse tokso sunimitonou\n");
	 scanf ("%lf",&th);	
     printf ("to tokso hmmitonou tou %lf einai %lf vathmous \n",th,asin(th)*180.0/PI);
	 break;
	    printf("\n");
	  case '6':
	  	printf ("ypologismos toksou efaptomenhs\n");
	printf ("dwse tokso efaptomenhs\n");
	 scanf ("%lf",&tef);	
     printf ("to tokso efaptomenhs tou %lf einai %lf vathmous \n",tef,atan(tef)*180.0/PI);
	 break;
	    printf("\n");
	  case '7':
	  	printf ("ypologismos toksou efaptomenhs me 2 parametrous\n");
	printf ("dwse kai ta 2 toksa efaptomenhs\n");
	 scanf ("%lf %lf",&tef1,&tef2);	
     printf ("to tokso efaptomenhs gia to (tef1=%lf , tef2=%lf) einai %lf vathmous \n",tef1,tef2,atan2(tef1,tef2)*180.0/PI);
	 break;
	     printf("\n");
	    }
	    }  
	    
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");

	printf ("                           (b) ypervolikes sunarthseis                                                \n");
    printf ("1 (ypologismos ypervolikou sunhmmitonou)          2 (ypologismos ypervolikou hmmitonou)               \n");
    printf ("3 (ypologismos ypervolikhs efaptomenhs)           4 (ypologismos toksou ypervolikou sunhmmitonou)     \n");
    printf ("5 (ypologismos toksou ypervolikou nhmmitonou)     6 (ypologismos toksou ypervolikhs efaptomenhs)      \n");
	printf ("                                dialekse sunarthsh                                                    \n");
	          while(epilogi=='b')
	       { 
	      scanf ("%c",&m);
          switch(m)
            {
	  case '1':
		 printf("ypologismos ypervolikou sunhmmitonou \n");
	printf ("dwse ypervoliko sunhmmitono\n");
	 scanf ("%lf",&ys);	
     printf ("to ypervoliko sunhmmitonou tou  %lf einai %lf \n",log(ys),cosh(log(ys)));
	 break;
	     printf("\n");
	  case '2':
		 printf("ypologismos ypervolikou hmmitonou \n");
	printf ("dwse ypervoliko hmmitono\n");
	 scanf ("%lf",&yh);	
     printf ("to ypervoliko hmmitonou tou  %lf einai %lf \n",log(yh),sinh(log(yh)));
	 break;
	   printf("\n");
	  case '3':
		 printf("ypologismos ypervolikhs efaptomenhs \n");
	printf ("dwse ypervolikh efaptomenh\n");
	 scanf ("%lf",&yef);	
     printf ("h ypervolikh efaptomenh tou  %lf einai %lf \n",log(yef),tanh(log(yef)));
	 break; 
	    printf("\n");
	  case '4':
		 printf("ypologismos toksou ypervolikou sunhmmitonou \n");
	printf ("dwse tokso ypervolikou sunhmmitonou\n");
	 scanf ("%lf",&yshm);	
     printf ("to tokso toy ypervolkikou sunhmmitonou %lf einai %lf aktines \n",exp(yshm)-sinh(yshm),acosh((exp(yshm))-(sinh(yshm))));
	 break;
	    printf("\n");
	  case '5':
		 printf("ypologismos toksou ypervolikou nhmmitonou \n");
	printf ("dwse tokso ypervolikou nhmmitonou\n");
	 scanf ("%lf",&yhm);	
     printf ("to tokso toy ypervolkikou nhmmitonou %lf einai %lf aktines \n",exp(yhm)-cosh(yhm),asinh((exp(yhm))-(cosh(yhm))));
	 break; 
	    printf("\n");
	  case '6':
		 printf("ypologismos toksou ypervolikhs efaptomenhs \n");
	printf ("dwse tokso ypervolikhs efaptomenhs\n");
	 scanf ("%lf",&tyef);	
     printf ("to tokso ths ypervolkikhs efaptomenhs %lf einai %lf aktines \n",tanh(tyef),atanh(tanh(tyef)));
	 break;
	    printf("\n");
	     }
	     }  
	     
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
	     
	printf ("                           (c) ekthetikes kai logarithmikes leitourgies                               \n");
    printf ("1 (ypologismos ekthetikhs sunarthshs)             2 (ypologismos ekthetikou significand)              \n");
    printf ("3 (dhmiourgia aksias apo significand kai ektheth) 4 (ypologismos fusikou logarithmou (e tou x))       \n");
    printf ("5 (ypologismos dekadikou logarithmou)             6 (spasimo se klasmatika kai anapospasta meroi)     \n"); 
    printf ("7 (ypologismos duadikhs ekthetikhs sunarthshs)    8 (ypologismos ekthetikhs sunarthshs -1)            \n");
    printf ("9 (ypologismos akeraiou duadikou logarithmou)     ! (ypologismos logarithmou  +1)                     \n"); 
    printf ("@ (ypologismos duadikou logarithmou)              # (ypologismos floating-point vashs logarithmou)    \n");
    printf ("& (ypologismos klimakas significand xrhsimopoiwntas floating-point vash kai ektheth)                  \n");
    printf ("* (ypologismos klimakas significand xrhsimopoiwntas floating-point vash kai ektheth (mhkos) )         \n");
	printf ("                                      dialekse leitourgia                                             \n");
	         while(epilogi=='c')
	       {
	         scanf ("%c",&m);
               switch(m)
	      {
	   case '1':
	printf ("ypologismos ekthetikhs sunarthshs\n");
	printf ("dwse ekthetikh sunarthsh\n");
	 scanf ("%lf",&t1);	
     printf ("h ekthetikh sunarthsh einai %lf \n",exp(t1));
	 break;
	    printf("\n");
	  case '2':
		 printf("ypologismos ekthetikou significand \n");
	printf ("dwse ekthetiko significand kai dunamh\n");
	 scanf ("%lf %d",&ekth,&n);	
     printf ("%lf = %lf * 2^%d \n",ekth,frexp(ekth,&n),n);
	 break;
	    printf("\n");
	  case '3':
		 printf("dhmiourgia aksias apo significand kai ektheth \n");
	printf ("dwse ekthetiko significand kai dunamh\n");
	 scanf ("%lf %d",&ekth,&n);	
     printf ("%lf * 2^%d = %lf \n",ekth,n,ldexp(ekth,n));
	 break;
	    printf("\n");
	  case '4':
	printf ("ypologismos fusikou logarithmou (e tou x)\n");
	printf ("dwse logarithmo\n");
	 scanf ("%lf",&t1);	
     printf ("o lagarithmos e tou x einai %lf \n",log(t1));
	 break;
	    printf("\n");
	  case '5':
	printf ("ypologismos dekadikou logarithmou\n");
	printf ("dwse dekadiko logarithmo\n");
	 scanf ("%lf",&t1);	
     printf ("o dekadikos logarithmos einai %lf \n",log10(t1));
	 break;
	    printf("\n");
	  case '6':
		 printf("spasimo se klasmatika kai anapospasta meroi \n");
	printf ("dwse anapospasto arithmo \n");
	 scanf ("%lf",&anap);	
     printf ("%lf = %lf + %lf \n",anap,ypol,modf(anap,&ypol));
	 break;
	    printf("\n");
	  case '7':
		 printf("ypologismos duadikhs ekthetikhs sunarthshs \n");
	printf ("dwse duadikh ekthetikh sunarthsh\n");
	 scanf ("%lf",&dyad);	
     printf ("2^%lf = %lf \n",dyad,exp2(dyad));
	 break; 
	    printf("\n");
	  case '8':
		 printf("ypologismos ekthetikhs sunarthshs -1 \n");
	printf ("dwse duadikh ekthetikh sunarthsh\n");
	 scanf ("%lf",&dyad);	
     printf ("expm1 (%lf) = %lf \n",dyad,expm1(dyad));
	 break; 
	    printf("\n");
	  case '9':
		 printf("ypologismos akeraiou duadikou logarithmou \n");
	printf ("dwse duadiko logarithmo\n");
	 scanf ("%lf",&dyadlog);	
     printf ("ilogb(%lf) = %d \n",dyadlog,ilogb(dyadlog));
	 break; 
	    printf("\n");
	  case '!':
		 printf("ypologismos logarithmou  +1 \n");
	printf ("dwse logarithmo\n");
	 scanf ("%lf",&logs);	
     printf ("log1p(%lf) = %lf\n",logs,log1p(logs));
	 break; 
	    printf("\n");
	  case '@':
		 printf("ypologismos duadikou logarithmou \n");
	printf ("dwse logarithmo\n");
	 scanf ("%lf",&logs);	
     printf ("log2 (%lf) = %lf \n",logs,log2(logs));
	 break; 
	    printf("\n");
	  case '#':
		 printf("ypologismos floating-point vashs logarithmou \n");
	printf ("dwse logarithmo\n");
	 scanf ("%lf",&logs);	
     printf ("logb (l%f) = %lf \n",logs,logb(logs));
	 break; 
	    printf("\n");
		case '&':
		 printf("ypologismos klimakas significand xrhsimopoiwntas floating-point vash kai ektheth \n");
	printf ("dwse klimaka kai dunamh\n");
	 scanf ("%lf %d",&klim,&n);	
     printf ("%lf * %d^%d = %lf \n",klim,FLT_RADIX,n,scalbn(klim,n));
	 break;   
	    printf("\n");
	   case '*':
		 printf("ypologismos klimakas significand xrhsimopoiwntas floating-point vash kai ektheth (mhkos) \n");
	printf ("dwse klimaka kai dunamh\n");
	 scanf ("%lf %d",&klim,&n);	
     printf ("%lf * %d^%d = %lf \n",klim,FLT_RADIX,n,scalbln(klim,n));
	 break;    
	    printf("\n");
	      }
           }
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");           
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");
           
    printf ("                             (d) ypologismos leitourgiwn isxys                                        \n");
    printf ("1 (ypologismos  dunamhs)                          2 (ypologismos tetragwnikhs rizas)                  \n");
    printf ("3 (ypologismos kuvikhs rizas)                     4 ( ypologismos upoteinousas orthwgwniou trigwnou)  \n");
    printf ("                                  dialekse leitourgia                                                 \n"); 
                while(epilogi=='d')
              { 
    
	              scanf ("%c",&m);
                  switch(m)
                  {
      case '1':
	printf ("ypologismos  dunamhs\n");
	printf ("dwse vash kai ektheth\n");
	 scanf ("%lf %lf",&d1,&d2);	
     printf ("h dunamh einai %lf \n",pow(d1,d2));
	 break;
	   printf("\n");
	  case '2':
	printf ("ypologismos tetragwnikhs rizas\n");
	printf ("dwse tetragwnikh riza\n");
	 scanf ("%lf",&t1);	
      printf ("h tetragwnikh riza tou %lf einai %lf \n",t1,sqrt(t1));
	 break;
	    printf("\n");
	   case '3':
	printf ("ypologismos kivikhs rizas\n");
	printf ("dwse kivikh riza\n");
	 scanf ("%lf",&kiv);	
     printf ("h kivikh riza tou %lf einai %lf \n",kiv,cbrt(kiv));
	 break;
	    printf("\n");
	   case '4':
	printf ("ypologismos upoteinousas orthwgwniou trigwnou\n");
	printf ("dwse plevres trigwnou\n");
	 scanf ("%lf %lf",&plev1,&plev2);	
     printf ("h hpotinousa tsh plevras %lf kai ths plevras %lf einai %lf \n",plev1,plev2,hypot(plev1,plev2));
	 break;
	    printf("\n");
	   }
	    }
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");	          
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");    
	          
	printf ("                             (e )ypologismsos sfalmatwn kai gamma leitourgiwn                         \n");
    printf ("1 (ypologismos sunarthshs sfalmatos)              2 (ypologismos sumplhrwmatikhs sunarthshs sfalmatos)\n");  
	printf ("3 (ypologismos  leitourgias tgamma)               4 (ypologismos  leitourgias lgamma)                 \n");
	printf ("                                  dialekse sfalma h gamma leitourgias                                 \n"); 
	         while(epilogi=='e')
	      {

	          scanf ("%c",&m);
              switch(m) 
              { 
	  case '1':
	printf ("ypologismos sunarthshs sfalmatos\n");
	printf ("dwse sunarthsh\n");
	 scanf ("%lf",&sfalma);	
     printf ("erf (%lf) = %lf \n",sfalma,erf(sfalma));
	 break;
	     printf("\n");
	  case '2':
	printf ("ypologismos sumplhrwmatikhs sunarthshs sfalmatos\n");
	printf ("dwse sunarthsh\n");
	 scanf ("%lf",&sfalma);	
     printf ("erfc (%lf) = %lf \n",sfalma,erfc(sfalma));
	 break; 
	    printf("\n");
	  case '3':
	printf ("ypologismos  leitourgias tgamma \n");
	printf ("dwse tgamma \n");
	 scanf ("%lf",&sfalma);	
     printf ("tgamma (%lf) = %lf \n",sfalma,tgamma(sfalma));
	 break;
	   printf("\n");
	  case '4':
	printf ("ypologismos  leitourgias lgamma \n");
	printf ("dwse tgamma \n");
	 scanf ("%lf",&sfalma);	
     printf ("lgamma (%lf) = %lf \n",sfalma,lgamma(sfalma));
	 break;
	    printf("\n");
             }
             }
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");             
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");
             
    printf ("                             (f) strogulopoihsh kai leitouries upoloipou                              \n");
	printf ("1 (strogkulopoihsh arithmou pros ta epanw)        2 (strogkulopoihsh  arithmou  pros ta katw)         \n"); 
	printf ("3 (ypologismos ypoloipou diaireshs)               3 (ypologismos upoloipou diaireshs IEC 60559        \n"); 
	printf ("5 (ypologismos ypoloipou kai poilikou)                                                                \n");
                 printf ("                          dialekse leitourgia                                            \n");
                 printf("\n");
                 while(epilogi=='f')
               {
	              scanf ("%c",&m);
                   switch(m)
                   {
	   case '1':
	printf ("strogkulopoihsh arithmou pros ta epanw\n");
	printf ("dwse arithmo\n");
	 scanf ("%lf",&t1);	
     printf ("o arithmos %lf tha ginei %lf",t1,ceil(t1));
	 break;
	   printf("\n");
	  case '2':
	printf ("strogkulopoihsh  arithmoiu  pros ta katw\n");
	printf ("dwse arithmo\n");
	 scanf ("%lf",&t1);	
     printf ("a arithmos %lf tha ginei %lf",t1,floor(t1));
	 break;
	   printf("\n");
	  case '3':
	printf ("ypologismos ypoloipou diaireshs \n");
	printf ("dwse duo arithmous\n");
	 scanf ("%lf %lf",&ar1,&ar2);	
     printf ("to ypoloipo ths diaireshs einai %lf",fmod(ar1,ar2));
	 break;
	   printf("\n");
	  case '4':
	printf ("ypologismos ypoloipou diaireshs IEC 60559 \n");
	printf ("dwse duo arithmous\n");
	 scanf ("%lf %lf",&ar1,&ar2);	
     printf ("remainder of %lf / %lf is %lf \n",ar1,ar2,remainder(ar1,ar2));
	 break;
	   printf("\n");
	   case '5':
	printf ("ypologismos ypoloipou kai poilikou \n");
	printf ("dwse duo arithmous\n");
	 scanf ("%lf %lf",&numer,&denom);	
       printf ("numerator: %f\n", numer);
       printf ("denominator: %f\n", denom);
       printf ("remainder: %f\n", result);
       printf ("quotient: %d\n", quot);
	 break;
	    printf("\n");
              }
               }
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");             
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");	               
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");   
	               
	printf ("                            (g) leitourgies diaxeirhshs Floating-point                                \n");
	printf ("1 (antigrafh proshmou)                            2 (anaparastash meagaluterou-mikroterou apo to 0)   \n");  
	printf ("3 (anaparastash meagaluterou-mikroterou apo to 0 me akrivhs aksia)                                    \n");  
	printf ("                                      dialekse leitourgia                                             \n");
	               while(epilogi=='g')
				{
	              scanf ("%c",&m);
                  switch(m) 
                  {
	  case '1':
	printf ("antigrafh proshmou \n");
	printf ("dwse duo proshma\n");
	 scanf ("%lf %lf",&ar1,&ar2);
	    printf ("copysign ( ar1,ar2) = %f\n", copysign( ar1,ar2));
	 break;
	   printf("\n");
	   case '2':
	    printf ("anaparastash meagaluterou-mikroterou apo to 0 \n");
	     printf ("dwse duo arithmous \n");
	      printf("times arithmwn > 0 (0.0),(1.0) \n");
	      printf("times arithmwn < 0 (0.0),(-1.0) \n");
	      scanf("%lf %lf",&ar1,&ar2);
	    printf ("prwta anaprastatai h timh megaluterh tou mhdenos: %e\n", nextafter(ar1,ar2));
        printf ("prwta anaparastatei h timh mikroterh tou mhdenos: %e\n", nextafter(ar1,ar2));
	 break;
	   printf("\n");
	   case '3':
	    printf ("anaparastash meagaluterou-mikroterou apo to 0 me akrivhs aksia \n");
	     printf("times arithmwn > 0 (0.0),(1.0L) \n");
	      printf("times arithmwn < 0 (0.0),(-1.0L) \n");
	       printf ("dwse duo arithmous \n");
	      scanf("%lf %lf",&ar1,&ar2);
	    printf ("prwta anaprastatai h timh megaluterh tou mhdenos: %e\n", nexttoward(ar1,ar2));
        printf ("prwta anaparastatei h timh mikroterh tou mhdenos: %e\n", nexttoward(ar1,ar2));
	 break;
	    printf("\n");
             }
              }
 printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");                  
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");   
				    
    printf ("                           (h) leitourgies elaxisths - megisths diaforas                              \n");
	printf ("1 (euresh thetikhs diaforas)         2 (euresh megisths timhs)           3 (euresh elaxisths timhs)   \n"); 
    printf ("                                     dialekse leitourgia                                              \n");
                   while(epilogi=='h')
               {
	            scanf ("%c",&m);
                 switch(m)
                 {
	   case '1':
	    printf ("euresh thetikhs diaforas \n");
	     printf("times arithmwn (2.0,1.0) \n");
	      printf("times arithmwn (1.0,2.0) \n");
	      printf("times arithmwn (-2.0,1.0) \n");
	      printf("times arithmwn (-1.0,2.0) \n");
	        printf ("dwse duo arithmous \n ");
	      scanf("%lf %lf",&ar1,&ar2);
	       printf ("fdim (%lf, %lf) = %lf\n", ar1,ar2,fdim(ar1,ar2));
	 break;
	   printf("\n");
	  case '2':
	    printf ("euresh megisths timhs \n");
	        printf ("dwse duo arithmous \n ");
	      scanf("%lf %lf",&ar1,&ar2);
	       printf ("max (%lf, %lf) = %lf\n", ar1,ar2,fmax(ar1,ar2));
	 break;
	    printf("\n");
	  case '3':
	    printf ("euresh elaxisths timhs \n");
	        printf ("dwse duo arithmous \n ");
	      scanf("%lf %lf",&ar1,&ar2);
	       printf ("min (%lf, %lf) = %lf\n", ar1,ar2,fmin(ar1,ar2));
	 break;
	  printf("\n");
              }
               }
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");               
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");
                      
    printf ("                          (i) ypologismos apolutwn timwn                                              \n");
	printf ("1 (ypologismos apoluths timhs akeraiou arithmou)  2 (ypologismos apoluths timhs pragmatikou arithmou) \n");
	printf ("3 (leitourgia add pollaplasiasmou)                                                                    \n");
	printf ("                               dialekse ypologismo                                                    \n"); 
                    while(epilogi=='i')
                {
	              scanf ("%c",&m);
                  switch(m)
                  {
	  case '1':
	printf ("ypologismos apoluths timhs akeraiou arithmou \n");
	printf ("dwse timh\n");
	 scanf ("%d",&t);	
     printf ("h apoluth timh tou %d einai %d \n",t,abs(t));
	 break;
	    printf("\n");
	   case '2':
	printf ("ypologismos apoluths timhs pragmatikou arithmou \n");
	printf ("dwse timh\n");
	 scanf ("%lf",&t1);	
     printf ("h apoluth timh tou %lf einai %lf \n",t1,fabs(t1));
	 break;
	    printf("\n");
	  case '3':
	  	printf("leitourgia add pollaplasiasmou \n");
	  	 printf ("dwse treis arithmous \n");
	  	  scanf ("%lf %lf %lf",&x,&y,&z);
          #ifdef FP_FAST_FMA
          result2 = fma(x,y,z);
         #else
          result2 = x*y+z;
          #endif
          printf ("%lf * %lf + %lf = %lf\n",x,y,z,result2);
           break;
            printf("\n");
      }
       }
printf ("           computer                               \n");
printf ("               mathematics                        \n");       
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");
       
	      
    printf ("              (j) stroggoilopoihseis kai guroi arithwn                        \n");	
    printf ("1 (ypologismos perikophs aksias) 2 (ypologismos gurou sto plhsiestero)        \n");
    printf ("3 (ypologismos gurou sto plhsiestero kai riksimo se megalo akeraio)           \n");
    printf ("4 (ypologismos gurou sto plhsiestero kai riksimo se mikro akeraio)            \n");
    printf ("5 (ypologismos gurou oloklhrwtikhs aksias)                                    \n");
    printf ("6 (ypologismos gurou oloklhrwtikhs aksias kai riksimo se megalo akeraio)      \n");
    printf ("7 (ypologismos gurou oloklhrwtikhs aksias kai riksimo se polu megalo akeraio) \n");
    printf ("8 (ypologismos gurou se kontinh anipospasth aksia)                            \n");
    printf ("                    dialekse ypologismo                                       \n");  
                             while (epilogi=='j')
                             {
                             scanf ("%c",&m);
                             switch(m)	
                           {
        case '1':
	   printf ("ypologismos perikophs aksias \n");
	   printf ("dwse 3 arithmous \n");
	   scanf ("%lf %lf %lf",&ar1,&ar2,&ar3);
  printf ("value\tround\tfloor\tceil\ttrunc\n");
  printf ("-----\t-----\t-----\t----\t-----\n");
  printf (format, ar1,round( ar1),floor( ar1),ceil( ar1),trunc( ar1));
  printf (format, ar2,round( ar2),floor( ar2),ceil( ar2),trunc( ar2));
  printf (format, ar3,round( ar3),floor( ar3),ceil( ar3),trunc( ar3));
  printf (format,-ar1,round(-ar1),floor(-ar1),ceil(-ar1),trunc(-ar1));
  printf (format,-ar2,round(-ar2),floor(-ar2),ceil(-ar2),trunc(-ar2));
  printf (format,-ar3,round(-ar3),floor(-ar3),ceil(-ar3),trunc(-ar3));
   break;
   
    case '2':
	   printf ("ypologismos gurou sto plhsiestero \n");
	   printf ("dwse 3 arithmous \n");
	   scanf ("%lf %lf %lf",&ar1,&ar2,&ar3);
  printf ("value\tround\tfloor\tceil\ttrunc\n");
  printf ("-----\t-----\t-----\t----\t-----\n");
  printf (format, ar1,round( ar1),floor( ar1),ceil( ar1),trunc( ar1));
  printf (format, ar2,round( ar2),floor( ar2),ceil( ar2),trunc( ar2));
  printf (format, ar3,round( ar3),floor( ar3),ceil( ar3),trunc( ar3));
  printf (format,-ar1,round(-ar1),floor(-ar1),ceil(-ar1),trunc(-ar1));
  printf (format,-ar2,round(-ar2),floor(-ar2),ceil(-ar2),trunc(-ar2));
  printf (format,-ar3,round(-ar3),floor(-ar3),ceil(-ar3),trunc(-ar3));
   break;
   
   case '3':
	   printf ("ypologismos gurou sto plhsiestero kai riksimo se megalo akeraio\n");
	   printf ("dwse 2 arithmous \n");
	   scanf ("%lf %lf",&ar1,&ar2);
        printf ( "lround (ar1) = %ld\n", lround(ar1) );
        printf ( "lround (ar2) = %ld\n", lround(ar2));
       printf ( "lround (-ar1) = %ld\n", lround(-ar1) );
       printf ( "lround (-ar2) = %ld\n", lround(-ar2) );
   break;
   
    case '4':
	   printf ("ypologismos gurou sto plhsiestero kai riksimo se mikro akeraio\n");
	   printf ("dwse 2 arithmous \n");
	   scanf ("%lf %lf",&ar1,&ar2);
        printf ( "llround (ar1) = %lld\n", llround(ar1) );
        printf ( "llround (ar2) = %lld\n", llround(ar2) );
        printf ( "llround (-ar1) = %lld\n", llround(-ar1) );
        printf ( "llround (-ar2) = %lld\n", llround(-ar2) );
   break;
      
        case '5':
		 printf ("e (ypologismos gurou oloklhrwtikhs aksias) \n");
		 printf ("dwse 2 arithmous \n");
	   scanf ("%lf %lf",&ar1,&ar2);
         printf ("rounding using");
  switch (fegetround()) 
  {
    case FE_DOWNWARD: printf ("downward "); break;
    case FE_TONEAREST: printf ("to-nearest "); break;
    case FE_TOWARDZERO: printf ("toward-zero "); break;
    case FE_UPWARD: printf ("upward "); break;
    default: printf ("unknown ");
  }
  printf (" rounding:\n");

  printf ( "rint  (ar1) = %.lf\n", rint(ar1) );
  printf ( "rint  (ar2) = %.lf\n", rint (ar2) );
  printf ( "rint (-ar1) = %.lf\n", rint (-ar1) );
  printf ( "rint  (-ar2) = %.lf\n", rint (-ar2) );
   break;
   
     case '6':
	   printf ("ypologismos gurou oloklhrwtikhs aksias kai riksimo se megalo akeraio \n");
	   printf ("dwse 2 arithmous \n");
	   scanf ("%lf %lf",&ar1,&ar2);
         printf ("rounding using");
  switch (fegetround()) 
  {
    case FE_DOWNWARD: printf ("downward "); break;
    case FE_TONEAREST: printf ("to-nearest "); break;
    case FE_TOWARDZERO: printf ("toward-zero "); break;
    case FE_UPWARD: printf ("upward "); break;
    default: printf ("unknown ");
  }
  printf (" rounding:\n");

  printf ( "lrint  (ar1) = %.lf\n", lrint(ar1) );
  printf ( "lrint  (ar2) = %.lf\n", lrint (ar2) );
  printf ( "lrint (-ar1) = %.lf\n", lrint (-ar1) );
  printf ( "lrint  (-ar2) = %.lf\n", lrint (-ar2) );
   break;
   
     case '7':
	   printf ("ypologismos gurou oloklhrwtikhs aksias kai riksimo se polu megalo akeraio \n");
	   printf ("dwse 2 arithmous \n");
	   scanf ("%lf %lf",&ar1,&ar2);
         printf ("rounding using");
  switch (fegetround()) 
  {
    case FE_DOWNWARD: printf ("downward "); break;
    case FE_TONEAREST: printf ("to-nearest "); break;
    case FE_TOWARDZERO: printf ("toward-zero "); break;
    case FE_UPWARD: printf ("upward "); break;
    default: printf ("unknown ");
  }
  printf (" rounding:\n");

  printf ( "lrint  (ar1) = %.lf\n", lrint(ar1) );
  printf ( "lrint  (ar2) = %.lf\n", lrint (ar2) );
  printf ( "lrint (-ar1) = %.lf\n", lrint (-ar1) );
  printf ( "lrint  (-ar2) = %.lf\n", lrint (-ar2) );
   break;
   
     case 8:
	   printf ("ypologismos gurou se kontinh anipospasth aksia \n");
	   printf ("dwse 2 arithmous \n");
	   scanf ("%lf %lf",&ar1,&ar2);
  printf ("value\tround\tfloor\tceil\ttrunc\n");
  printf ("-----\t-----\t-----\t----\t-----\n");
   printf ("rounding using ");
  switch (fegetround()) {
    case FE_DOWNWARD: printf ("downward"); break;
    case FE_TONEAREST: printf ("to-nearest"); break;
    case FE_TOWARDZERO: printf ("toward-zero"); break;
    case FE_UPWARD: printf ("upward"); break;
    default: printf ("unknown");
  }
  printf (" rounding:\n");
  printf ( "nearbyint (ar1) = %.1f\n", nearbyint(ar1) );
  printf ( "nearbyint (ar2) = %.1f\n", nearbyint(ar2) );
  printf ( "nearbyint (-ar1) = %.1f\n", nearbyint(-ar1) );
  printf ( "nearbyint (-ar2) = %.1f\n", nearbyint(-ar2) );
   break;
				        }
			           }
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");			           
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");			           
printf ("           computer                               \n");
printf ("               mathematics                        \n");			           
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");
			           
			           
	printf ("                     (+) makrotaksinomhseis leitourgiwn                              \n");
    printf ("1 (katataksh floating-point aksias)       2 (ypologismos peperasmenhs timhs)         \n"); 
    printf ("3 (ypologismos apeirou)                   4 (ypologismos not - A arithmou)           \n");
    printf ("5 (ypologismos fusiologikou arithmou)     6 (ypologismos bit)                        \n");
    printf ("                         dialekse leitourgia                                         \n");
         while (epilogi=='+')
         {
         	 scanf ("%c",&m);
         switch (m)
	   {
	   	case '1':
	printf ("katataksh floating-point aksias  \n"); 
        printf ("dwse arithmo \n");
         scanf ("%lf",&d);                            // p.x double d = 1.0 / 0.0;
         switch (fpclassify(d)) 
	    {
    case FP_INFINITE:  printf ("infinite (apeiro)");            break;
    case FP_NAN:       printf ("NaN      (nan)");               break;
    case FP_ZERO:      printf ("zero   (mhden)");               break;
    case FP_SUBNORMAL: printf ("subnormal (upoofusiologikh)");  break;
    case FP_NORMAL:    printf ("normal     (fusiologikh)");     break;
    }
  if (signbit(d)) printf (" negative (arnhtiko) \n");
  else printf (" positive or unsigned (thetiko h anupografo)\n");
   break;
   
     case '2':
    printf ("ypologismos peperasmenhs timhs \n");
    printf ("kanoniko apotelesma \n");
    printf ("isfinite(0.0)       : %d\n",isfinite(0.0));
  printf ("isfinite(1.0/0.0)   : %d\n",isfinite(1.0/0.0));
  printf ("isfinite(-1.0/0.0)  : %d\n",isfinite(-1.0/0.0));
  printf ("isfinite(sqrt(-1.0)): %d\n",isfinite(sqrt(-1.0)));
   printf ("\n");
    printf ("dwse times \n");
    printf ("oi times na einai (0.0) h (1.0/0.0) h (-1.0/0.0) h (-1.0) \n");
    scanf ("%d %d",&ar1,&ar2);
  printf ("isfinite(ar1)       : %d\n",isfinite(ar1));
  printf ("isfinite(ar2/ar1)   : %d\n",isfinite(ar2/ar1));
  printf ("isfinite(-ar2/ar1)  : %d\n",isfinite(-ar2/ar1));
  printf ("isfinite(sqrt(-ar2)): %d\n",isfinite(sqrt(-ar2)));
   break;
    
    case '3':
    printf ("ypologismos apeirou \n");
     printf ("kanoniko apotelesma \n");
     printf ("isinf(0.0)       : %d\n",isinf(0.0));
  printf ("isinf(1.0/0.0)   : %d\n",isinf(1.0/0.0));
  printf ("isinf(-1.0/0.0)  : %d\n",isinf(-1.0/0.0));
  printf ("isinf(sqrt(-1.0)): %d\n",isinf(sqrt(-1.0)));
    printf ("\n");
    printf ("dwse times \n");
    printf ("oi times na einai (0.0) h (1.0/0.0) h (-1.0/0.0) h (-1.0) \n");
    scanf ("%d %d",&ar1,&ar2);
  printf ("isinf(ar1)       : %d\n",isinf(ar1));
  printf ("isinf(ar2/ar1)   : %d\n",isinf(ar2/ar1));
  printf ("isinf(-ar2/ar1)  : %d\n",isinf(-ar2/ar1));
  printf ("isinf(sqrt(-ar2)): %d\n",isinf(sqrt(-ar2)));
   break;
    
    case '4':
    	printf ("ypologismos not - A arithmou \n");
      printf ("kanoniko apotelesma \n");
    printf ("isnan(0.0)       : %d\n",isnan(0.0));
  printf ("isnan(1.0/0.0)     : %d\n",isnan(1.0/0.0));
  printf ("isnan(-1.0/0.0)    : %d\n",isnan(-1.0/0.0));
  printf ("isnan(sqrt(-1.0))  : %d\n",isnan(sqrt(-1.0)));
    printf ("\n");
    printf ("dwse times \n");
    printf ("oi times na einai (0.0) h (1.0/0.0) h (-1.0/0.0) h (-1.0) \n");
    scanf ("%d %d",&ar1,&ar2);
  printf ("isnan(ar1)         : %d\n",isnan(ar1));
  printf ("isnan2/ar1)        : %d\n",isnan(ar2/ar1));
  printf ("isnan(-ar2/ar1)    : %d\n",isnan(-ar2/ar1));
  printf ("isnan(sqrt(-ar2))  : %d\n",isnan(sqrt(-ar2)));
   break;
   
   case '5':
    	printf ("ypologismos fusiologikou arithmou \n");
      printf ("kanoniko apotelesma \n");
       printf ("isnormal(1.0)    : %d\n",isnormal(1.0));
       printf ("isnormal(0.0)    : %d\n",isnormal(0.0));
       printf ("isnormal(1.0/0.0): %d\n",isnormal(1.0/0.0));
    printf ("\n");
    printf ("dwse times \n");
    printf ("oi times na einai (0.0) h (1.0/0.0) h (-1.0/0.0) h (-1.0) \n");
    scanf ("%d %d",&ar1,&ar2);
     printf ("isnormal(ar2)    : %d\n",isnormal(ar2));
     printf ("isnormal(ar1)    : %d\n",isnormal(ar1));
     printf ("isnormal(ar2/ar1): %d\n",isnormal(ar2/ar1));
   break;
   
    case '6':
    	printf ("ypologismos bit \n");
      printf ("kanoniko apotelesma \n");
       printf ("signbit(0.0)       : %d\n",signbit(0.0));
  printf ("signbit(1.0/0.0)   : %d\n",signbit(1.0/0.0));
  printf ("signbit(-1.0/0.0)  : %d\n",signbit(-1.0/0.0));
  printf ("signbit(sqrt(-1.0)): %d\n",signbit(sqrt(-1.0)));
    printf ("\n");
    printf ("dwse times \n");
    printf ("oi times na einai (0.0) h (1.0/0.0) h (-1.0/0.0) h (-1.0) \n");
    scanf ("%d %d",&ar1,&ar2);
       printf ("signbit(ar1)       : %d\n",signbit(ar1));
  printf ("signbit(ar2/ar1)   : %d\n",signbit(ar2/ar1));
  printf ("signbit(-ar2/ar1)  : %d\n",signbit(-ar2/ar1));
  printf ("signbit(sqrt(-ar2)): %d\n",signbit(sqrt(-ar2)));
   break;
		 }
          }
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");          
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");          
printf ("           computer                               \n");
printf ("               mathematics                        \n");         
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");
          
          
    printf ("                     (-) sugkrish makroleitourgiwn                                   \n");
    printf ("> (ypologismos megaluterou)               = (ypologismos megaluterou h isou)         \n");
    printf ("< (ypologismos mikroterou)                / (ypologismos mikroterou h isou)          \n");
    printf ("- (ypologismos mikroterou h megaluterou)  ! (ypologismos aoristou)                   \n");
    printf ("                      dialekse makroleitourgia                                       \n");
    	   while (epilogi=='-')
    	   {
    	   	  scanf ("%c",&m);
    	   	  switch(m)
    	   	  {
    	   	case '>':
    	printf ("ypologismos megaluterou \n");
    	printf ("dwse arithmo \n");
    	scanf ("%lf",&ar);
    	if (isgreater(ar,0.0))
    printf ("log(%lf) is positive (einai thetikh) \n",ar);
  else
    printf ("log(%lf) is not positive (den einai thetikh) \n",ar);
   break;

   case '=':
    	printf ("ypologismos megaluterou h isou \n");
    	printf ("dwse arithmo \n");
    	scanf ("%lf",&ar);
    	if (isgreaterequal(ar,0.0))
    printf ("log(%lf) is not negative (den einai arnhtikh) \n",ar);
  else
    printf ("log(%lf) is negative (einai arnhtikh) \n",ar);
   break;
   
   case '<':
    	printf ("ypologismos mikroterou \n");
    	printf ("dwse arithmo \n");
    	scanf ("%lf",&ar);
      if (isless(ar,0.0))
    printf ("log(%lf) is negative (einai arnhtikh) \n",ar);
  else
    printf ("log(%lf) is not negative (den einai arnhtikh) \n",ar);
   break;
   
    case '/':
    	printf ("ypologismos mikroterou h isou \n");
    	printf ("dwse arithmo \n");
    	scanf ("%lf",&ar);
       if (islessequal(ar,0.0))
    printf ("log(%lf) is not positive (den einai thetikh) \n",ar);
  else
    printf ("log(%lf) is positive (einai thetikh) \n",ar);
   break;
   
    case '-':
    	printf ("ypologismos mikroterou h meagaluterou \n");
    	printf ("dwse arithmo \n");
    	scanf ("%lf",&ar);
        if (islessgreater(ar,0.0))
    printf ("log(%lf) is not zero (den einai mhden) \n",ar);
  else
    printf ("log(%lf) is zero (einai mhden) \n",ar);
   break;
   
   case '!':
    	printf ("ypologismos aoristou (oute mikrotero oute megalutero oute iso) \n");
    	printf ("dwse arithmo \n");
    	scanf ("%lf",&ar);
        if (isunordered(sqrt(ar),0.0))
    printf ("sqrt(%lf) and 0.0 cannot be ordered (den mporei na diataxthei) \n",ar);
  else
    printf ("sqrt(%lf) and 0.0 can be ordered (mporei na diataxthei) \n",ar);
   break;
           }
    	   }
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
printf ("                    errros                        \n");   	   
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");   	   
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");    	   
printf ("           computer                               \n");
printf ("               mathematics                        \n");   	   
printf ("   -1x=in(x_/-x^2+1)                              \n");
printf ("                                                  \n");
printf ("     du/a^2-u^2=1/a-1(u/a)+C;u^2<a^2              \n");
printf ("                                                  \n");
printf ("   S/n=0xn/n!=1+x+x^2/2!+x^3/3!+x^4/4!+...        \n");
printf ("                                                  \n");
printf ("  e^>=1+_______________2z_________________        \n");
printf ("      2_z+_______________z2_______________        \n");
printf ("         6+________________z2_____________        \n");
printf ("         10+_________________z2___________        \n");
printf ("            14+_______________z2__________        \n");
printf ("               18+_____________z2_________        \n");
printf ("                  22+___________z2________        \n");
printf ("                    26+.........                  \n");
printf ("                                                  \n");
printf ("                                                  \n");
printf ("           computer                               \n");
printf ("               mathematics                        \n");
printf ("                                                  \n");
printf ("               ++++++++++++++                     \n");
printf ("              ----------------                    \n");
printf ("           errors                                 \n");
    	   
  printf ("                       (|)  ypologismos lathwn                         \n");
  printf ("           (0) metrhsh lathwn tou upologisth se pragmatiko xrono       \n");
    	     while (epilogi=='|')
    	     {
    	     scanf ("%c",&m);
			 switch(m)
			 {	
    	   case '0':
    printf ("ypologismos lathwn \n");
     printf ("\n");
    errno = 0;
  if (math_errhandling & MATH_ERREXCEPT) feclearexcept(FE_ALL_EXCEPT);
  printf ("Error handling: %d\n",math_errhandling);
  sqrt (-1);
  if (math_errhandling & MATH_ERRNO) {
    if (errno==EDOM) printf("errno set to EDOM\n");
  }
  if (math_errhandling  &MATH_ERREXCEPT) {
    if (fetestexcept(FE_INVALID)) printf("FE_INVALID raised\n");
  }
   break; 
    }
    }
}
printf ("eksodos \n");
 return 0; 
}
 
