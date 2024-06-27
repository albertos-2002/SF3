# Risultati analisi

il picco con l'altezza più alta si trova in una palla aperta di 4860
come range sono stati presi i seguenti (circa, un punto dentro un cerchio di raggio epsilon e centrato li differisce poco a livello visivo)

sinistro: 3755 - 4480

centrale: 4480 - 5240

  destro: 5240 - 6035

## range utilizzati per il fit (i riusltati sono riportati alla fine)

A:  3860 - 3900 $\sim$ 40 punti

B:  4095 - 4135 $\sim$ 40 punti

C:  4340 - 4380 $\sim$ 40 punti

D:  4580 - 4625 $\sim$ 45 punti

E:  4830 - 4880 $\sim$ 50 punti

F:  5090 - 5130 $\sim$ 40 punti

G:  5340 - 5385 $\sim$ 45 punti

H:  5610 - 5650 $\sim$ 40 punti

I:  5880 - 5920 $\sim$ 40 punti

## risultati analisi:

```
  Zona sinistra results: 

 Distanze: 238.47 \pm 0.13038
           242.18 \pm 0.128485
 Media distanze: 240.325 \pm 0.129436

 Zona centrale results: 

 Distanze: 249.74 \pm 0.161487
           254.16 \pm 0.116713
 Media distanze: 251.95 \pm 0.14089

 Zona destra results: 

 Distanze: 262.99 \pm 0.177131
           267.8 \pm 0.104661
 Media distanze: 265.395 \pm 0.145481

 Compatibilità tra le zone: 
 sx-cx: 60.7619
 cx-dx: 66.3883
 sx-dx: 128.745

 Media delle medie: 251.577 \pm 0.0797288

 ------------------------------------------------------------------------------------------- 

 Fattore di conversione: (0.000168529 \pm 1.25971e-06) nm / pixel 
 ------------------------------------------------------------------------------------------- 

 Risoluzioni (qualsiasi cosa siano): 

 zona sinistra: 
 (1)            14563.7 \pm 109.151 nm 
 (2)            14340.6 \pm 107.462 nm 
 zona centrale: 
 (3)            13906.5 \pm 104.336 nm 
 (4)            13664.6 \pm 102.332 nm 
 zona destra:   
 (5)            13205.8 \pm 99.1103 nm 
 (6)            12968.6 \pm 97.0699 nm 

 Media aritmetica: 13727.6 \pm 42.0399


 Fattori di compatibilità: 

 ( 1 ) e ( 2 )    1.45654
 ( 1 ) e ( 3 )    4.35252
 ( 1 ) e ( 4 )    6.00897
 ( 1 ) e ( 5 )    9.20989
 ( 1 ) e ( 6 )    10.9197

 ( 2 ) e ( 3 )    2.89832
 ( 2 ) e ( 4 )    4.5552
 ( 2 ) e ( 5 )    7.76224
 ( 2 ) e ( 6 )    9.4739

 ( 3 ) e ( 4 )    1.65483
 ( 3 ) e ( 5 )    4.86873
 ( 3 ) e ( 6 )    6.58089

 ( 4 ) e ( 5 )    3.22052
 ( 4 ) e ( 6 )    4.93441

 ( 5 ) e ( 6 )    1.70976


 ------------------------------------------------------------------------------------------- 

 Per avere una idea printiamo anche le distanze in nanometri tra i picchi: 
 zona sinistra: 
 (1)            0.0401891 nm 
 (2)            0.0408143 nm 
 zona centrale: 
 (3)            0.0420884 nm 
 (4)            0.0428333 nm 
 zona destra:   
 (5)            0.0443214 nm 
 (6)            0.045132 nm 


 ------------------------------------------------------------------------------------------- 

 THE REAL FOOKING RESOLUTIONS: 
                | FWHM  \pm SigmaFWHM   | Risoluzione \pm SigmaRisoluzione 
 zona sinistra: 
 (1)            0.00741722001538715 \pm 4.87818138850403e-05 | 78910.9664787866 \pm 518.984211371799
 (2)            0.00767708067167797 \pm 7.47143040886504e-05 | 76239.9178843163 \pm 741.976364728955
 (3)            0.00762096537418328 \pm 4.77495940209407e-05 | 76801.2937026006 \pm 481.202894190451
 zona centrale: 
 (1)            0.00806742725311911 \pm 8.19370651523233e-05 | 72551.0105806911 \pm 736.866499604148
 (2)            0.00808377767926324 \pm 6.08862883467484e-05 | 72404.2673144549 \pm 545.34244658306
 (3)            0.00786868226736705 \pm 4.48192166751077e-05 | 74383.4838048236 \pm 423.680784713307
 zona destra:   
 (1)            0.00856960757454612 \pm 9.86914896900234e-05 | 68299.5102061018 \pm 786.568153641055
 (2)            0.00817104609453257 \pm 5.78590783800617e-05 | 71630.975180967 \pm 507.218067244659
 (3)            0.00809711200738079 \pm 5.29932391821665e-05 | 72285.0319307031 \pm 473.084475415747


```

## risultati dei fit (in ordine)

``` 
Fit A

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **    1 **SET PRINT           2
 **********
 **********
 **    2 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.75335e+01  8.26005e+00     no limits
     2 Mean         3.87971e+03  1.16391e+03     no limits
     3 Sigma        1.09116e+01  5.45582e+00    0.00000e+00  1.09116e+02
 **********
 **    3 **SET ERR           1
 **********
 **********
 **    4 **SET PRINT           2
 **********
 **********
 **    5 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **    6 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1084.52 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.75335e+01   8.26005e+00   8.26005e+00  -6.33086e+01
   2  Mean         3.87971e+03   1.16391e+03   1.16391e+03   1.58124e+01
   3  Sigma        1.09116e+01   5.45582e+00   1.72186e-01  -1.63427e+04
NO ERROR MATRIX       
 FCN=342.701 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=589.423    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.90260e+01   8.26005e+00   1.49249e+00   1.00635e+02
   2  Mean         3.87954e+03   1.16391e+03  -1.71528e-01   8.38590e+00
   3  Sigma        1.38706e+01   5.45582e+00   8.56119e-02  -2.27489e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.1378e-01  9.8984e-01  1.6964e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=2.69153 FROM MIGRAD    STATUS=CONVERGED      98 CALLS          99 TOTAL
                     EDM=2.95378e-11    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.44302e+01   2.53993e-01   1.73893e-04   2.29823e-05
   2  Mean         3.87918e+03   2.65741e-01   1.84974e-03  -2.36505e-05
   3  Sigma        1.86928e+01   4.61869e-01   7.65561e-06   2.74063e-04
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.451e-02  3.364e-03 -8.015e-02 
  3.364e-03  7.062e-02 -1.344e-02 
 -8.015e-02 -1.344e-02  2.133e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68368   1.000  0.050 -0.683
        2  0.11470   0.050  1.000 -0.109
        3  0.68738  -0.683 -0.109  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.451e-02  3.364e-03 -8.015e-02 
  3.364e-03  7.062e-02 -1.344e-02 
 -8.015e-02 -1.344e-02  2.133e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0045694   0.0002383  -0.0056771
Mean        	   0.0002383   0.0050019 -0.00095183
Sigma       	  -0.0056771 -0.00095183     0.01511

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.049846    -0.68322
Mean        	    0.049846           1    -0.10949
Sigma       	    -0.68322    -0.10949           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      2.69153
NDf                       =           38
Edm                       =  2.95378e-11
NCalls                    =           99
Constant                  =      24.4302   +/-   0.0675973   
Mean                      =      3879.18   +/-   0.0707239   
Sigma                     =      18.6928   +/-   0.122921     	 (limited)
```
---
``` 
Fit B

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **    7 **SET PRINT           2
 **********
 **********
 **    8 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.82157e+01  8.46470e+00     no limits
     2 Mean         4.11582e+03  1.23475e+03     no limits
     3 Sigma        1.09607e+01  5.48034e+00    0.00000e+00  1.09607e+02
 **********
 **    9 **SET ERR           1
 **********
 **********
 **   10 **SET PRINT           2
 **********
 **********
 **   11 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   12 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1243.9 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.82157e+01   8.46470e+00   8.46470e+00  -6.48125e+01
   2  Mean         4.11582e+03   1.23475e+03   1.23475e+03  -8.33016e+01
   3  Sigma        1.09607e+01   5.48034e+00   1.72186e-01  -1.75856e+04
NO ERROR MATRIX       
 FCN=381.999 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=795.465    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.98980e+01   8.46470e+00   1.68235e+00   1.21399e+02
   2  Mean         4.11679e+03   1.23475e+03   9.72129e-01  -1.68792e+01
   3  Sigma        1.43313e+01   5.48034e+00   9.64572e-02  -1.47023e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.9848e-01  9.1224e-01  1.7893e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=5.52866 FROM MIGRAD    STATUS=CONVERGED      94 CALLS          95 TOTAL
                     EDM=7.09501e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.49986e+01   2.51256e-01   2.29928e-04   5.07127e-03
   2  Mean         4.11765e+03   2.87157e-01   1.96345e-03   2.29010e-03
   3  Sigma        1.93448e+01   4.93576e-01   1.03506e-05   6.10507e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.313e-02 -9.150e-03 -8.361e-02 
 -9.150e-03  8.246e-02  4.400e-02 
 -8.361e-02  4.400e-02  2.436e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.67976   1.000 -0.127 -0.674
        2  0.32995  -0.127  1.000  0.310
        3  0.71132  -0.674  0.310  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.313e-02 -9.150e-03 -8.361e-02 
 -9.150e-03  8.246e-02  4.400e-02 
 -8.361e-02  4.400e-02  2.436e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0091847  -0.0013312   -0.012165
Mean        	  -0.0013312    0.011997   0.0064022
Sigma       	   -0.012165   0.0064022    0.035446

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.12681     -0.6742
Mean        	    -0.12681           1     0.31046
Sigma       	     -0.6742     0.31046           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      5.52866
NDf                       =           38
Edm                       =  7.09501e-07
NCalls                    =           95
Constant                  =      24.9986   +/-   0.0958371   
Mean                      =      4117.65   +/-   0.109531    
Sigma                     =      19.3448   +/-   0.188266     	 (limited)


```
---
``` 
Fit C

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   13 **SET PRINT           2
 **********
 **********
 **   14 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.92196e+01  8.76588e+00     no limits
     2 Mean         4.35993e+03  1.30798e+03     no limits
     3 Sigma        1.09583e+01  5.47914e+00    0.00000e+00  1.09583e+02
 **********
 **   15 **SET ERR           1
 **********
 **********
 **   16 **SET PRINT           2
 **********
 **********
 **   17 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   18 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1283.16 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.92196e+01   8.76588e+00   8.76588e+00  -6.71495e+01
   2  Mean         4.35993e+03   1.30798e+03   1.30798e+03  -2.31544e+00
   3  Sigma        1.09583e+01   5.47914e+00   1.72186e-01  -1.88498e+04
NO ERROR MATRIX       
 FCN=408.938 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=698.076    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     3.08089e+01   8.76588e+00   1.58929e+00   1.09783e+02
   2  Mean         4.35995e+03   1.30798e+03   2.29018e-02   3.32417e+00
   3  Sigma        1.40122e+01   5.47914e+00   8.78636e-02  -2.65839e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.1290e-01  9.9940e-01  1.6877e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=2.54419 FROM MIGRAD    STATUS=CONVERGED      97 CALLS          98 TOTAL
                     EDM=2.41778e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.58028e+01   2.53013e-01   1.69026e-04   3.44162e-04
   2  Mean         4.35983e+03   2.59581e-01   2.07893e-03   1.16838e-05
   3  Sigma        1.92034e+01   4.65002e-01   7.45479e-06   7.93892e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.402e-02  1.032e-03 -8.081e-02 
  1.032e-03  6.738e-02 -3.722e-03 
 -8.081e-02 -3.722e-03  2.162e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68690   1.000  0.016 -0.687
        2  0.03174   0.016  1.000 -0.031
        3  0.68717  -0.687 -0.031  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.402e-02  1.032e-03 -8.081e-02 
  1.032e-03  6.738e-02 -3.722e-03 
 -8.081e-02 -3.722e-03  2.162e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.004286  6.9105e-05  -0.0054107
Mean        	  6.9105e-05   0.0045114 -0.00024922
Sigma       	  -0.0054107 -0.00024922    0.014478

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.015716    -0.68688
Mean        	    0.015716           1   -0.030838
Sigma       	    -0.68688   -0.030838           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      2.54419
NDf                       =           38
Edm                       =  2.41778e-09
NCalls                    =           98
Constant                  =      25.8028   +/-   0.0654674   
Mean                      =      4359.83   +/-   0.0671669   
Sigma                     =      19.2034   +/-   0.12032      	 (limited)


```
---
``` 
Fit D

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   19 **SET PRINT           2
 **********
 **********
 **   20 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.89016e+01  8.67047e+00     no limits
     2 Mean         4.60356e+03  1.38107e+03     no limits
     3 Sigma        1.21675e+01  6.08373e+00    0.00000e+00  1.21675e+02
 **********
 **   21 **SET ERR           1
 **********
 **********
 **   22 **SET PRINT           2
 **********
 **********
 **   23 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   24 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1281.59 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.89016e+01   8.67047e+00   8.67047e+00  -6.51190e+01
   2  Mean         4.60356e+03   1.38107e+03   1.38107e+03  -9.94198e+01
   3  Sigma        1.21675e+01   6.08373e+00   1.72186e-01  -1.91193e+04
NO ERROR MATRIX       
 FCN=389.34 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=831.811    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     3.04234e+01   8.67047e+00   1.52182e+00   1.31173e+02
   2  Mean         4.60476e+03   1.38107e+03   1.19964e+00  -1.78385e+01
   3  Sigma        1.56744e+01   6.08373e+00   9.07154e-02  -1.44846e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.0555e-01  9.1775e-01  1.7767e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=9.57924 FROM MIGRAD    STATUS=CONVERGED      97 CALLS          98 TOTAL
                     EDM=2.97286e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.57184e+01   2.39870e-01   2.81686e-04   1.14802e-03
   2  Mean         4.60560e+03   2.69737e-01   2.19612e-03   3.02609e-04
   3  Sigma        2.03284e+01   4.37438e-01   1.08726e-05   2.57310e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.754e-02 -7.924e-03 -7.010e-02 
 -7.924e-03  7.276e-02  3.561e-02 
 -7.010e-02  3.561e-02  1.914e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.67324   1.000 -0.122 -0.668
        2  0.32004  -0.122  1.000  0.302
        3  0.70391  -0.668  0.302  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.754e-02 -7.924e-03 -7.010e-02 
 -7.924e-03  7.276e-02  3.561e-02 
 -7.010e-02  3.561e-02  1.914e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.012818  -0.0017653   -0.015617
Mean        	  -0.0017653    0.016208    0.007934
Sigma       	   -0.015617    0.007934    0.042629

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.12247    -0.66809
Mean        	    -0.12247           1     0.30183
Sigma       	    -0.66809     0.30183           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      9.57924
NDf                       =           43
Edm                       =  2.97286e-08
NCalls                    =           98
Constant                  =      25.7184   +/-   0.113216    
Mean                      =       4605.6   +/-   0.127313    
Sigma                     =      20.3284   +/-   0.206466     	 (limited)


```
---
``` 
Fit E

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   25 **SET PRINT           2
 **********
 **********
 **   26 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.94366e+01  8.83097e+00     no limits
     2 Mean         4.85510e+03  1.45653e+03     no limits
     3 Sigma        1.32502e+01  6.62510e+00    0.00000e+00  1.32502e+02
 **********
 **   27 **SET ERR           1
 **********
 **********
 **   28 **SET PRINT           2
 **********
 **********
 **   29 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   30 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1121.85 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.94366e+01   8.83097e+00   8.83097e+00  -6.70857e+01
   2  Mean         4.85510e+03   1.45653e+03   1.45653e+03  -2.24564e+01
   3  Sigma        1.32502e+01   6.62510e+00   1.72186e-01  -1.97719e+04
NO ERROR MATRIX       
 FCN=353.413 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=641    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     3.07165e+01   8.83097e+00   1.27997e+00   1.17028e+02
   2  Mean         4.85534e+03   1.45653e+03   2.41842e-01   7.27702e-02
   3  Sigma        1.63237e+01   6.62510e+00   7.37610e-02  -2.53970e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.3055e-01  9.9956e-01  1.6699e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=9.05557 FROM MIGRAD    STATUS=CONVERGED      88 CALLS          89 TOTAL
                     EDM=9.71161e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.64413e+01   2.33142e-01   2.68156e-04   1.95570e-03
   2  Mean         4.85534e+03   2.28721e-01   2.31521e-03   3.01855e-04
   3  Sigma        2.03696e+01   3.53223e-01   8.50489e-06   7.80479e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.436e-02 -1.178e-04 -5.512e-02 
 -1.178e-04  5.231e-02  1.089e-03 
 -5.512e-02  1.089e-03  1.248e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.66941   1.000 -0.002 -0.669
        2  0.01630  -0.002  1.000  0.013
        3  0.66949  -0.669  0.013  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.436e-02 -1.178e-04 -5.512e-02 
 -1.178e-04  5.231e-02  1.089e-03 
 -5.512e-02  1.089e-03  1.248e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.010255 -2.2229e-05     -0.0104
Mean        	 -2.2229e-05   0.0098693  0.00020544
Sigma       	     -0.0104  0.00020544    0.023539

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1  -0.0022096    -0.66938
Mean        	  -0.0022096           1    0.013479
Sigma       	    -0.66938    0.013479           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      9.05557
NDf                       =           48
Edm                       =  9.71161e-08
NCalls                    =           89
Constant                  =      26.4413   +/-   0.101265    
Mean                      =      4855.34   +/-   0.0993444   
Sigma                     =      20.3696   +/-   0.153422     	 (limited)


```
---
``` 
Fit F

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   31 **SET PRINT           2
 **********
 **********
 **   32 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.96429e+01  8.89287e+00     no limits
     2 Mean         5.10983e+03  1.53295e+03     no limits
     3 Sigma        1.10096e+01  5.50478e+00    0.00000e+00  1.10096e+02
 **********
 **   33 **SET ERR           1
 **********
 **********
 **   34 **SET PRINT           2
 **********
 **********
 **   35 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   36 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1421.22 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.96429e+01   8.89287e+00   8.89287e+00  -7.51313e+01
   2  Mean         5.10983e+03   1.53295e+03   1.53295e+03   7.88323e+00
   3  Sigma        1.10096e+01   5.50478e+00   1.72186e-01  -2.02294e+04
NO ERROR MATRIX       
 FCN=449.201 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=749.065    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     3.14062e+01   8.89287e+00   1.76328e+00   1.13390e+02
   2  Mean         5.10976e+03   1.53295e+03  -7.63758e-02   6.32456e+00
   3  Sigma        1.41693e+01   5.50478e+00   9.03505e-02  -2.91782e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.0921e-01  9.9549e-01  1.6953e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=1.98166 FROM MIGRAD    STATUS=CONVERGED      98 CALLS          99 TOTAL
                     EDM=1.18362e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.61971e+01   2.51775e-01   1.53703e-04   1.76283e-04
   2  Mean         5.10950e+03   2.68252e-01   2.43640e-03  -1.25736e-04
   3  Sigma        1.98276e+01   4.94549e-01   7.12550e-06   3.46439e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.339e-02  2.284e-03 -8.586e-02 
  2.284e-03  7.196e-02 -9.691e-03 
 -8.586e-02 -9.691e-03  2.446e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68970   1.000  0.034 -0.690
        2  0.07653   0.034  1.000 -0.073
        3  0.69130  -0.690 -0.073  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.339e-02  2.284e-03 -8.586e-02 
  2.284e-03  7.196e-02 -9.691e-03 
 -8.586e-02 -9.691e-03  2.446e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0033058  0.00011913  -0.0044773
Mean        	  0.00011913   0.0037526 -0.00050536
Sigma       	  -0.0044773 -0.00050536    0.012755

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.033825     -0.6895
Mean        	    0.033825           1   -0.073045
Sigma       	     -0.6895   -0.073045           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      1.98166
NDf                       =           38
Edm                       =  1.18362e-09
NCalls                    =           99
Constant                  =      26.1971   +/-   0.0574957   
Mean                      =       5109.5   +/-   0.0612584   
Sigma                     =      19.8276   +/-   0.112936     	 (limited)


```
---
``` 
Fit G

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   37 **SET PRINT           2
 **********
 **********
 **   38 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.82400e+01  8.47201e+00     no limits
     2 Mean         5.36417e+03  1.60925e+03     no limits
     3 Sigma        1.22593e+01  6.12965e+00    0.00000e+00  1.22593e+02
 **********
 **   39 **SET ERR           1
 **********
 **********
 **   40 **SET PRINT           2
 **********
 **********
 **   41 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   42 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1401.69 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.82400e+01   8.47201e+00   8.47201e+00  -6.02789e+01
   2  Mean         5.36417e+03   1.60925e+03   1.60925e+03  -1.41727e+02
   3  Sigma        1.22593e+01   6.12965e+00   1.72186e-01  -1.87001e+04
NO ERROR MATRIX       
 FCN=407.032 FROM MIGRAD    STATUS=PROGRESS       23 CALLS          24 TOTAL
                     EDM=755.392    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.96399e+01   8.47201e+00   1.39982e+00   1.22252e+02
   2  Mean         5.36603e+03   1.60925e+03   1.85646e+00  -2.98083e+01
   3  Sigma        1.58904e+01   6.12965e+00   9.30929e-02  -1.95296e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6781e-01  7.9669e-01  1.9355e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=9.51486 FROM MIGRAD    STATUS=CONVERGED      97 CALLS          98 TOTAL
                     EDM=4.97438e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.50348e+01   2.34406e-01   2.78438e-04  -1.93986e-05
   2  Mean         5.36782e+03   3.39803e-01   2.55958e-03   9.06901e-05
   3  Sigma        2.15938e+01   5.28665e-01   1.17818e-05  -3.22359e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.495e-02 -1.507e-02 -7.949e-02 
 -1.507e-02  1.155e-01  9.164e-02 
 -7.949e-02  9.164e-02  2.795e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.66117   1.000 -0.189 -0.641
        2  0.54091  -0.189  1.000  0.510
        3  0.75376  -0.641  0.510  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.495e-02 -1.507e-02 -7.949e-02 
 -1.507e-02  1.155e-01  9.164e-02 
 -7.949e-02  9.164e-02  2.795e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.012158  -0.0033345   -0.017588
Mean        	  -0.0033345     0.02555    0.020278
Sigma       	   -0.017588    0.020278    0.061846

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.18919     -0.6414
Mean        	    -0.18919           1     0.51012
Sigma       	     -0.6414     0.51012           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      9.51486
NDf                       =           43
Edm                       =  4.97438e-10
NCalls                    =           98
Constant                  =      25.0348   +/-   0.110264    
Mean                      =      5367.82   +/-   0.159843    
Sigma                     =      21.5938   +/-   0.248684     	 (limited)


```
---
``` 
Fit H

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   43 **SET PRINT           2
 **********
 **********
 **   44 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.85890e+01  8.57671e+00     no limits
     2 Mean         5.63022e+03  1.68907e+03     no limits
     3 Sigma        1.10692e+01  5.53459e+00    0.00000e+00  1.10692e+02
 **********
 **   45 **SET ERR           1
 **********
 **********
 **   46 **SET PRINT           2
 **********
 **********
 **   47 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   48 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1397.77 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.85890e+01   8.57671e+00   8.57671e+00  -7.15935e+01
   2  Mean         5.63022e+03   1.68907e+03   1.68907e+03  -2.84006e+01
   3  Sigma        1.10692e+01   5.53459e+00   1.72186e-01  -1.92029e+04
NO ERROR MATRIX       
 FCN=447.184 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=919.957    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     3.04298e+01   8.57671e+00   1.84073e+00   1.31445e+02
   2  Mean         5.63055e+03   1.68907e+03   3.32842e-01  -3.92628e+00
   3  Sigma        1.46526e+01   5.53459e+00   1.01254e-01  -1.71824e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.0479e-01  9.8918e-01  1.7060e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=2.51829 FROM MIGRAD    STATUS=CONVERGED     101 CALLS         102 TOTAL
                     EDM=3.78266e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.51106e+01   2.50554e-01   1.65387e-04  -1.48464e-04
   2  Mean         5.63081e+03   2.96494e-01   2.68498e-03  -1.72261e-05
   3  Sigma        2.05895e+01   5.66341e-01   8.64359e-06  -1.96295e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.278e-02 -3.068e-03 -9.829e-02 
 -3.068e-03  8.791e-02  1.676e-02 
 -9.829e-02  1.676e-02  3.208e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.69323   1.000 -0.041 -0.693
        2  0.10702  -0.041  1.000  0.100
        3  0.69632  -0.693  0.100  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.278e-02 -3.068e-03 -9.829e-02 
 -3.068e-03  8.791e-02  1.676e-02 
 -9.829e-02  1.676e-02  3.208e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0041603 -0.00020335  -0.0065138
Mean        	 -0.00020335   0.0058258   0.0011108
Sigma       	  -0.0065138   0.0011108    0.021257

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.041305    -0.69267
Mean        	   -0.041305           1    0.099822
Sigma       	    -0.69267    0.099822           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      2.51829
NDf                       =           38
Edm                       =  3.78266e-10
NCalls                    =          102
Constant                  =      25.1106   +/-   0.0645004   
Mean                      =      5630.81   +/-   0.0763267   
Sigma                     =      20.5895   +/-   0.145794     	 (limited)


```
---
``` 
Fit I

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   49 **SET PRINT           2
 **********
 **********
 **   50 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     2.79742e+01  8.39227e+00     no limits
     2 Mean         5.89958e+03  1.76987e+03     no limits
     3 Sigma        1.10486e+01  5.52430e+00    0.00000e+00  1.10486e+02
 **********
 **   51 **SET ERR           1
 **********
 **********
 **   52 **SET PRINT           2
 **********
 **********
 **   53 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   54 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=1334.22 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.79742e+01   8.39227e+00   8.39227e+00  -7.21759e+01
   2  Mean         5.89958e+03   1.76987e+03   1.76987e+03   2.76809e+01
   3  Sigma        1.10486e+01   5.52430e+00   1.72186e-01  -1.84204e+04
NO ERROR MATRIX       
 FCN=423.224 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=697.494    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.96760e+01   8.39227e+00   1.70174e+00   1.09262e+02
   2  Mean         5.89927e+03   1.76987e+03  -3.08099e-01   1.29080e+01
   3  Sigma        1.43032e+01   5.52430e+00   9.26090e-02  -2.67236e+03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.0248e-01  9.6704e-01  1.7305e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=2.13017 FROM MIGRAD    STATUS=CONVERGED     100 CALLS         101 TOTAL
                     EDM=4.11362e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     2.46648e+01   2.50198e-01   1.56460e-04   8.86274e-04
   2  Mean         5.89861e+03   3.02456e-01   2.81267e-03  -7.57151e-04
   3  Sigma        2.04032e+01   5.63991e-01   8.11240e-06   1.07826e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.260e-02  6.467e-03 -9.711e-02 
  6.467e-03  9.148e-02 -3.285e-02 
 -9.711e-02 -3.285e-02  3.181e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68985   1.000  0.085 -0.688
        2  0.20316   0.085  1.000 -0.193
        3  0.70114  -0.688 -0.193  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.260e-02  6.467e-03 -9.711e-02 
  6.467e-03  9.148e-02 -3.285e-02 
 -9.711e-02 -3.285e-02  3.181e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0035091  0.00036254  -0.0054438
Mean        	  0.00036254   0.0051281  -0.0018412
Sigma       	  -0.0054438  -0.0018412    0.017832

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.085463    -0.68818
Mean        	    0.085463           1    -0.19254
Sigma       	    -0.68818    -0.19254           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      2.13017
NDf                       =           38
Edm                       =  4.11362e-08
NCalls                    =          101
Constant                  =      24.6648   +/-   0.059238    
Mean                      =      5898.61   +/-   0.0716108   
Sigma                     =      20.4032   +/-   0.133533     	 (limited)

```
---