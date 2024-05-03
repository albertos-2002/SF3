# Risultati analisi

## range e zone del fit (risultati riportati alla fine)

```

A:  3860 - 3900
B:  3900 - 3945
C:  4095 - 4140
D:  4140 - 4185
E:  4335 - 4380
F:  4380 - 4425
G:  4580 - 4625
H:  4625 - 4670
I:  4830 - 4875
J:  4875 - 4920
K:  5080 - 5130
L:  5130 - 5175
M:  5340 - 5390
N:  5390 - 5435
O:  5605 - 5650
P:  5650 - 5700
Q:  5870 - 5915
R:  5925 - 5970

```


## risultati analisi

```
 Valore in [pixel] dello splitting zeeman dei picchi
 I valori sono printati in ordine e con errore

 Zona Sinistra: 
 46.79 \pm 0.512791
 47.33 \pm 0.459149
 48.58 \pm 0.54563

 Zona Centrale: 
 49.84 \pm 0.639866
 51.11 \pm 0.650007
 51.79 \pm 0.573645

 Zona Destra:   
 52.31 \pm 0.552054
 53.1 \pm 0.54901
 55.29 \pm 0.2847

 ........................................................................................ 

 Valori in [pixel] della media aritmetica, per zona, della
 distanza tra i picchi dello split zeeman

 Zona Sinistra: 47.5667 \pm 0.507111

 Zona Centrale: 50.9133 \pm 0.622095

 Zona Destra:   53.5667 \pm 0.478619

 ........................................................................................ 

 Valori in [nm] della media aritmetica, per zona, della
 distanza tra i picchi dello split zeeman

 Zona Sinistra: 0.00801636 \pm 0.000104376

 Zona Centrale: 0.00858037 \pm 0.000122903

 Zona Destra:   0.00902754 \pm 0.000105165

 Matrice dei fattori di compatibilità tra le stime: 

            sx       cx       dx    
   sx        -    3.49788  6.82449
   cx        -        -    2.76445
   dx        -        -        -    

 ........................................................................................ 


 Valori di enegia [eV], per zona, dello split zeeman

 Zona Sinistra: 2.90163e-05 \pm 3.77803e-07

 Zona Centrale: 3.10578e-05 \pm 4.44863e-07

 Zona Destra:   3.26764e-05 \pm 3.80657e-07

 ........................................................................................ 

 Fattori di lande divisi per zona

 Zona Sinistra: 1.5405 \pm 0.0368403

 Zona Centrale: 1.64889 \pm 0.0406424

 Zona Destra:   1.73482 \pm 0.0402418

 Matrice dei fattori di compatibilità tra le stime: 

            sx       cx       dx    
   sx        -    1.97588  3.56163
   cx        -        -    1.50244
   dx        -        -        -    

 ........................................................................................ 

Medie pesate giusto perchè non si sa mai

Lambda zeeman [nm]: 0.00853473 \pm 6.34472e-05

Fattore di lande:   1.63521 \pm 0.0225893

 ........................................................................................ 

 Errore campo magnetico:0.00650913

 ........................................................................................ 

```

## risultati del fit (in ordine)

```
Fit:  A

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **    1 **SET PRINT           2
 **********
 **********
 **    2 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.30917e+02  3.92752e+01     no limits
     2 Mean         3.87985e+03  1.16396e+03     no limits
     3 Sigma        1.16640e+01  5.83199e+00    0.00000e+00  1.16640e+02
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
 FCN=55596 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.30917e+02   3.92752e+01   3.92752e+01  -4.89983e+02
   2  Mean         3.87985e+03   1.16396e+03   1.16396e+03   4.65584e+02
   3  Sigma        1.16640e+01   5.83199e+00   1.72186e-01  -5.46702e+05
NO ERROR MATRIX       
 FCN=19219.3 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=27081.2    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.42922e+02   3.92752e+01   1.20051e+01   6.98622e+02
   2  Mean         3.87954e+03   1.16396e+03  -3.17898e-01   8.78963e+01
   3  Sigma        1.64989e+01   5.83199e+00   1.27667e-01  -8.21777e+04
 FCN=36.2054 FROM MIGRAD    STATUS=PROGRESS      124 CALLS         125 TOTAL
                     EDM=4.71441e-05    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  16.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.10912e+02   2.37734e-01  -3.72902e-03   5.97373e-02
   2  Mean         3.87785e+03   2.60091e-01   3.47027e-02   2.53531e-02
   3  Sigma        4.42063e+01   1.06084e+00  -6.82321e-04   8.40156e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5067e-01  8.7545e-01  1.8739e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=36.2054 FROM MIGRAD    STATUS=CONVERGED     147 CALLS         148 TOTAL
                     EDM=1.18654e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.10912e+02   2.36026e-01   4.82106e-04  -2.90695e-04
   2  Mean         3.87785e+03   2.64863e-01   1.84910e-03  -5.73370e-04
   3  Sigma        4.42046e+01   1.03144e+00   3.52753e-05  -3.11750e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.571e-02  9.240e-03 -1.751e-01 
  9.240e-03  7.015e-02 -9.560e-02 
 -1.751e-01 -9.560e-02  1.064e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72777   1.000  0.148 -0.719
        2  0.38054   0.148  1.000 -0.350
        3  0.76028  -0.719 -0.350  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.571e-02  9.240e-03 -1.751e-01 
  9.240e-03  7.015e-02 -9.560e-02 
 -1.751e-01 -9.560e-02  1.064e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.053077   0.0088037    -0.16684
Mean        	   0.0088037     0.06684   -0.091087
Sigma       	    -0.16684   -0.091087      1.0137

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.14781    -0.71927
Mean        	     0.14781           1    -0.34993
Sigma       	    -0.71927    -0.34993           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      36.2054
NDf                       =           38
Edm                       =  1.18654e-07
NCalls                    =          148
Constant                  =      110.912   +/-   0.230385    
Mean                      =      3877.85   +/-   0.258534    
Sigma                     =      44.2046   +/-   1.00679      	 (limited)

```
---
```
Fit:  B

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **    7 **SET PRINT           2
 **********
 **********
 **    8 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.30124e+02  3.90373e+01     no limits
     2 Mean         3.92265e+03  1.17679e+03     no limits
     3 Sigma        1.30791e+01  6.53953e+00    0.00000e+00  1.30791e+02
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
 FCN=60999.1 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.30124e+02   3.90373e+01   3.90373e+01  -5.30278e+02
   2  Mean         3.92265e+03   1.17679e+03   1.17679e+03  -5.58305e+02
   3  Sigma        1.30791e+01   6.53953e+00   1.72186e-01  -6.01789e+05
NO ERROR MATRIX       
 FCN=21160.4 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=29605.1    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.41710e+02   3.90373e+01   1.15862e+01   7.72491e+02
   2  Mean         3.92308e+03   1.17679e+03   4.33887e-01  -4.83790e+01
   3  Sigma        1.84674e+01   6.53953e+00   1.26941e-01  -9.14042e+04
 FCN=117.955 FROM MIGRAD    STATUS=PROGRESS      123 CALLS         124 TOTAL
                     EDM=1.91526e-05    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  13.6 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.10063e+02   2.23038e-01  -3.99411e-03   4.62625e-02
   2  Mean         3.92464e+03   2.72802e-01  -1.35754e-02  -1.14389e-02
   3  Sigma        4.85496e+01   1.05296e+00  -4.03230e-05   5.47471e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5517e-01  8.9861e-01  1.8462e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=117.955 FROM MIGRAD    STATUS=CONVERGED     146 CALLS         147 TOTAL
                     EDM=1.8078e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.10063e+02   2.23398e-01   8.14899e-04  -1.01941e-03
   2  Mean         3.92464e+03   2.67381e-01   1.87141e-03   3.38048e-04
   3  Sigma        4.85493e+01   1.03405e+00   5.72855e-05  -1.71293e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.991e-02 -7.706e-03 -1.668e-01 
 -7.706e-03  7.149e-02  8.505e-02 
 -1.668e-01  8.505e-02  1.069e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72858   1.000 -0.129 -0.722
        2  0.33572  -0.129  1.000  0.308
        3  0.75368  -0.722  0.308  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.991e-02 -7.706e-03 -1.668e-01 
 -7.706e-03  7.149e-02  8.505e-02 
 -1.668e-01  8.505e-02  1.069e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	      0.1369   -0.021138    -0.45753
Mean        	   -0.021138     0.19611      0.2333
Sigma       	    -0.45753      0.2333      2.9334

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.12901    -0.72199
Mean        	    -0.12901           1     0.30759
Sigma       	    -0.72199     0.30759           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      117.955
NDf                       =           43
Edm                       =   1.8078e-08
NCalls                    =          147
Constant                  =      110.063   +/-   0.370001    
Mean                      =      3924.64   +/-   0.442848    
Sigma                     =      48.5493   +/-   1.71264      	 (limited)

```
---
```
Fit:  C

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   13 **SET PRINT           2
 **********
 **********
 **   14 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.32739e+02  3.98216e+01     no limits
     2 Mean         4.11740e+03  1.23522e+03     no limits
     3 Sigma        1.30521e+01  6.52607e+00    0.00000e+00  1.30521e+02
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
 FCN=61935.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.32739e+02   3.98216e+01   3.98216e+01  -5.46422e+02
   2  Mean         4.11740e+03   1.23522e+03   1.23522e+03   3.72645e+02
   3  Sigma        1.30521e+01   6.52607e+00   1.72186e-01  -6.19877e+05
NO ERROR MATRIX       
 FCN=21346.4 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=30831.5    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.44700e+02   3.98216e+01   1.19612e+01   7.91911e+02
   2  Mean         4.11713e+03   1.23522e+03  -2.74169e-01   3.28953e+01
   3  Sigma        1.83995e+01   6.52607e+00   1.26283e-01  -9.10047e+04
 FCN=70.0129 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=3.9044e-06    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  17.2 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.12608e+02   2.25895e-01   4.48874e-04   1.77107e-02
   2  Mean         4.11629e+03   2.23222e-01   8.66412e-03  -4.72281e-04
   3  Sigma        4.54735e+01   8.47595e-01  -1.03809e-04   3.41147e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6428e-01  9.6372e-01  1.7720e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=70.0129 FROM MIGRAD    STATUS=CONVERGED     142 CALLS         143 TOTAL
                     EDM=2.36549e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.12608e+02   2.25094e-01   6.32380e-04   1.13427e-04
   2  Mean         4.11629e+03   2.23549e-01   1.96280e-03  -3.32901e-05
   3  Sigma        4.54728e+01   8.38230e-01   3.73800e-05  -3.61139e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.067e-02  3.806e-03 -1.375e-01 
  3.806e-03  4.997e-02 -3.318e-02 
 -1.375e-01 -3.318e-02  7.027e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.73063   1.000  0.076 -0.729
        2  0.19345   0.076  1.000 -0.177
        3  0.73881  -0.729 -0.177  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.067e-02  3.806e-03 -1.375e-01 
  3.806e-03  4.997e-02 -3.318e-02 
 -1.375e-01 -3.318e-02  7.027e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.082497   0.0061969    -0.22385
Mean        	   0.0061969    0.081368   -0.054024
Sigma       	    -0.22385   -0.054024      1.1441

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.075636    -0.72861
Mean        	    0.075636           1    -0.17706
Sigma       	    -0.72861    -0.17706           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      70.0129
NDf                       =           43
Edm                       =  2.36549e-09
NCalls                    =          143
Constant                  =      112.608   +/-   0.287222    
Mean                      =      4116.29   +/-   0.285251    
Sigma                     =      45.4728   +/-   1.06959      	 (limited)

```
---
```
Fit:  D

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   19 **SET PRINT           2
 **********
 **********
 **   20 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.32249e+02  3.96748e+01     no limits
     2 Mean         4.16258e+03  1.24878e+03     no limits
     3 Sigma        1.30561e+01  6.52807e+00    0.00000e+00  1.30561e+02
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
 FCN=61959 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.32249e+02   3.96748e+01   3.96748e+01  -5.43668e+02
   2  Mean         4.16258e+03   1.24878e+03   1.24878e+03  -4.27007e+02
   3  Sigma        1.30561e+01   6.52807e+00   1.72186e-01  -6.18258e+05
NO ERROR MATRIX       
 FCN=21363.7 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=30578.6    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.44147e+02   3.96748e+01   1.18976e+01   7.87494e+02
   2  Mean         4.16290e+03   1.24878e+03   3.18128e-01  -7.64059e+00
   3  Sigma        1.84113e+01   6.52807e+00   1.26418e-01  -9.16632e+04
 FCN=106.998 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=3.3418e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  10.8 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.12144e+02   2.24733e-01  -7.04941e-04   5.33791e-03
   2  Mean         4.16362e+03   2.31553e-01  -2.01836e-03  -1.80436e-03
   3  Sigma        4.59426e+01   8.75610e-01   1.82395e-06   9.80965e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6515e-01  9.6921e-01  1.7656e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=106.998 FROM MIGRAD    STATUS=CONVERGED     138 CALLS         139 TOTAL
                     EDM=4.84901e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.12144e+02   2.24941e-01   7.79194e-04   5.33791e-03
   2  Mean         4.16362e+03   2.28084e-01   1.98537e-03  -1.80461e-03
   3  Sigma        4.59426e+01   8.65580e-01   4.75796e-05   9.81835e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.060e-02 -3.431e-03 -1.419e-01 
 -3.431e-03  5.202e-02  3.150e-02 
 -1.419e-01  3.150e-02  7.493e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.73075   1.000 -0.067 -0.729
        2  0.17517  -0.067  1.000  0.160
        3  0.73744  -0.729  0.160  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.060e-02 -3.431e-03 -1.419e-01 
 -3.431e-03  5.202e-02  3.150e-02 
 -1.419e-01  3.150e-02  7.493e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.12591  -0.0085374    -0.35322
Mean        	  -0.0085374     0.12945    0.078395
Sigma       	    -0.35322    0.078395      1.8645

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.066873    -0.72903
Mean        	   -0.066873           1     0.15957
Sigma       	    -0.72903     0.15957           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      106.998
NDf                       =           43
Edm                       =  4.84901e-07
NCalls                    =          139
Constant                  =      112.144   +/-   0.354833    
Mean                      =      4163.62   +/-   0.359791    
Sigma                     =      45.9426   +/-   1.36541      	 (limited)

```
---
```
Fit:  E

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   25 **SET PRINT           2
 **********
 **********
 **   26 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.35086e+02  4.05258e+01     no limits
     2 Mean         4.35747e+03  1.30724e+03     no limits
     3 Sigma        1.30234e+01  6.51168e+00    0.00000e+00  1.30234e+02
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
 FCN=62620.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.35086e+02   4.05258e+01   4.05258e+01  -5.54554e+02
   2  Mean         4.35747e+03   1.30724e+03   1.30724e+03   1.96598e+02
   3  Sigma        1.30234e+01   6.51168e+00   1.72186e-01  -6.35856e+05
NO ERROR MATRIX       
 FCN=21449.4 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=31731.9    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.47249e+02   4.05258e+01   1.21636e+01   8.05432e+02
   2  Mean         4.35734e+03   1.30724e+03  -1.38214e-01  -8.82286e+00
   3  Sigma        1.83179e+01   6.51168e+00   1.25378e-01  -9.11123e+04
 FCN=54.1741 FROM MIGRAD    STATUS=PROGRESS      120 CALLS         121 TOTAL
                     EDM=7.7586e-09    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  18.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14890e+02   2.26283e-01  -2.91531e-05   7.33094e-04
   2  Mean         4.35718e+03   1.92845e-01   8.52868e-04  -3.00622e-04
   3  Sigma        4.27970e+01   6.93241e-01  -1.48463e-05   1.60766e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6945e-01  9.9762e-01  1.7329e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=54.1741 FROM MIGRAD    STATUS=CONVERGED     136 CALLS         137 TOTAL
                     EDM=1.02368e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14890e+02   2.26059e-01   5.60113e-04   7.33094e-04
   2  Mean         4.35718e+03   1.92954e-01   2.07767e-03  -3.00522e-04
   3  Sigma        4.27970e+01   6.90802e-01   2.79630e-05   1.61224e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.110e-02  7.161e-04 -1.140e-01 
  7.161e-04  3.723e-02 -5.522e-03 
 -1.140e-01 -5.522e-03  4.772e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.73028   1.000  0.016 -0.730
        2  0.04610   0.016  1.000 -0.041
        3  0.73074  -0.730 -0.041  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.110e-02  7.161e-04 -1.140e-01 
  7.161e-04  3.723e-02 -5.522e-03 
 -1.140e-01 -5.522e-03  4.772e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.064382  0.00090225    -0.14365
Mean        	  0.00090225    0.046906  -0.0069565
Sigma       	    -0.14365  -0.0069565     0.60124

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.016418    -0.73015
Mean        	    0.016418           1   -0.041424
Sigma       	    -0.73015   -0.041424           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      54.1741
NDf                       =           43
Edm                       =  1.02368e-08
NCalls                    =          137
Constant                  =       114.89   +/-   0.253737    
Mean                      =      4357.18   +/-   0.216579    
Sigma                     =       42.797   +/-   0.775382     	 (limited)

```
---
```
Fit:  F

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   31 **SET PRINT           2
 **********
 **********
 **   32 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.34284e+02  4.02853e+01     no limits
     2 Mean         4.40272e+03  1.32082e+03     no limits
     3 Sigma        1.30839e+01  6.54193e+00    0.00000e+00  1.30839e+02
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
 FCN=65109.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.34284e+02   4.02853e+01   4.02853e+01  -5.43257e+02
   2  Mean         4.40272e+03   1.32082e+03   1.32082e+03  -7.60882e+02
   3  Sigma        1.30839e+01   6.54193e+00   1.72186e-01  -6.40363e+05
NO ERROR MATRIX       
 FCN=22610 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=31395.5    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.46150e+02   4.02853e+01   1.18660e+01   7.94500e+02
   2  Mean         4.40328e+03   1.32082e+03   5.56834e-01  -1.03847e+02
   3  Sigma        1.84747e+01   6.54193e+00   1.26951e-01  -9.79573e+04
 FCN=135.067 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=0.000298733    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  14.2 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.13578e+02   2.22485e-01  -2.01502e-03   1.88871e-01
   2  Mean         4.40576e+03   2.83006e-01  -4.94580e-02  -7.82712e-03
   3  Sigma        4.91658e+01   1.07450e+00  -5.64693e-04   2.14192e+00
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.3926e-01  8.0796e-01  1.9528e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=135.067 FROM MIGRAD    STATUS=CONVERGED     145 CALLS         146 TOTAL
                     EDM=3.33987e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.13576e+02   2.21317e-01   8.71707e-04   2.50257e-03
   2  Mean         4.40576e+03   2.82571e-01   2.10083e-03  -2.81178e-04
   3  Sigma        4.91630e+01   1.04056e+00   5.88383e-05  -1.79700e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.898e-02 -1.132e-02 -1.627e-01 
 -1.132e-02  7.985e-02  1.315e-01 
 -1.627e-01  1.315e-01  1.083e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72235   1.000 -0.181 -0.706
        2  0.48627  -0.181  1.000  0.447
        3  0.77750  -0.706  0.447  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.898e-02 -1.132e-02 -1.627e-01 
 -1.132e-02  7.985e-02  1.315e-01 
 -1.627e-01  1.315e-01  1.083e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.15385   -0.035544    -0.51101
Mean        	   -0.035544     0.25081     0.41313
Sigma       	    -0.51101     0.41313      3.4014

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.18094     -0.7064
Mean        	    -0.18094           1     0.44729
Sigma       	     -0.7064     0.44729           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      135.067
NDf                       =           43
Edm                       =  3.33987e-07
NCalls                    =          146
Constant                  =      113.576   +/-   0.392243    
Mean                      =      4405.76   +/-   0.500805    
Sigma                     =       49.163   +/-   1.8442       	 (limited)

```
---
```
Fit:  G

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   37 **SET PRINT           2
 **********
 **********
 **   38 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.37212e+02  4.11635e+01     no limits
     2 Mean         4.60247e+03  1.38074e+03     no limits
     3 Sigma        1.30125e+01  6.50623e+00    0.00000e+00  1.30125e+02
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
 FCN=63863.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.37212e+02   4.11635e+01   4.11635e+01  -5.56077e+02
   2  Mean         4.60247e+03   1.38074e+03   1.38074e+03   2.17450e+02
   3  Sigma        1.30125e+01   6.50623e+00   1.72186e-01  -6.52057e+05
NO ERROR MATRIX       
 FCN=21862.6 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=32510.2    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.49418e+02   4.11635e+01   1.22063e+01   8.15382e+02
   2  Mean         4.60233e+03   1.38074e+03  -1.47855e-01  -1.08502e+01
   3  Sigma        1.82786e+01   6.50623e+00   1.24847e-01  -9.31443e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7017e-01  9.9755e-01  1.7323e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=57.7541 FROM MIGRAD    STATUS=CONVERGED     128 CALLS         129 TOTAL
                     EDM=5.14418e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.16710e+02   2.26236e-01   5.79094e-04  -1.80364e-03
   2  Mean         4.60218e+03   1.82756e-01   2.19449e-03  -2.69081e-03
   3  Sigma        4.19035e+01   6.40343e-01   2.69562e-05   5.00793e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.118e-02  6.816e-04 -1.057e-01 
  6.816e-04  3.340e-02 -4.903e-03 
 -1.057e-01 -4.903e-03  4.101e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72955   1.000  0.016 -0.729
        2  0.04667   0.016  1.000 -0.042
        3  0.73003  -0.729 -0.042  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.118e-02  6.816e-04 -1.057e-01 
  6.816e-04  3.340e-02 -4.903e-03 
 -1.057e-01 -4.903e-03  4.101e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.068745  0.00091548    -0.14193
Mean        	  0.00091548     0.04486  -0.0065847
Sigma       	    -0.14193  -0.0065847     0.55075

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.016485    -0.72942
Mean        	    0.016485           1   -0.041892
Sigma       	    -0.72942   -0.041892           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      57.7541
NDf                       =           43
Edm                       =  5.14418e-07
NCalls                    =          129
Constant                  =       116.71   +/-   0.262192    
Mean                      =      4602.18   +/-   0.211802    
Sigma                     =      41.9035   +/-   0.742113     	 (limited)

```
---
```
Fit:  H

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   43 **SET PRINT           2
 **********
 **********
 **   44 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.35338e+02  4.06013e+01     no limits
     2 Mean         4.64778e+03  1.39433e+03     no limits
     3 Sigma        1.31055e+01  6.55274e+00    0.00000e+00  1.31055e+02
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
 FCN=67179.7 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.35338e+02   4.06013e+01   4.06013e+01  -5.42984e+02
   2  Mean         4.64778e+03   1.39433e+03   1.39433e+03  -8.81226e+02
   3  Sigma        1.31055e+01   6.55274e+00   1.72186e-01  -6.53606e+05
NO ERROR MATRIX       
 FCN=23449.7 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=31886.2    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.47180e+02   4.06013e+01   1.18424e+01   7.98082e+02
   2  Mean         4.64842e+03   1.39433e+03   6.41170e-01  -1.46107e+02
   3  Sigma        1.85278e+01   6.55274e+00   1.27447e-01  -1.02186e+05
 FCN=131.81 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=0.0821459    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  17.8 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14280e+02   2.18554e-01  -1.65424e-02  -1.13498e+00
   2  Mean         4.65206e+03   3.25804e-01  -2.35252e-01   1.51487e+00
   3  Sigma        5.22139e+01   1.24287e+00  -1.82004e-02  -2.74678e+01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.1361e-01  7.1101e-01  2.0754e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=131.767 FROM MIGRAD    STATUS=CONVERGED     154 CALLS         155 TOTAL
                     EDM=1.17358e-06    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14280e+02   2.17702e-01   8.58835e-04   5.17390e-03
   2  Mean         4.65202e+03   3.44921e-01   2.21825e-03  -7.97562e-05
   3  Sigma        5.22497e+01   1.23505e+00   6.36552e-05   1.07843e-01
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.739e-02 -1.618e-02 -1.828e-01 
 -1.618e-02  1.190e-01  2.452e-01 
 -1.828e-01  2.452e-01  1.526e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71296   1.000 -0.215 -0.680
        2  0.62344  -0.215  1.000  0.576
        3  0.80943  -0.680  0.576  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.739e-02 -1.618e-02 -1.828e-01 
 -1.618e-02  1.190e-01  2.452e-01 
 -1.828e-01  2.452e-01  1.526e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.14523   -0.049582    -0.56013
Mean        	   -0.049582     0.36457     0.75135
Sigma       	    -0.56013     0.75135      4.6748

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.21548    -0.67979
Mean        	    -0.21548           1     0.57554
Sigma       	    -0.67979     0.57554           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      131.767
NDf                       =           43
Edm                       =  1.17358e-06
NCalls                    =          155
Constant                  =       114.28   +/-   0.381093    
Mean                      =      4652.02   +/-   0.603795    
Sigma                     =      52.2497   +/-   2.16199      	 (limited)

```
---
```
Fit:  I

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   49 **SET PRINT           2
 **********
 **********
 **   50 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.37758e+02  4.13274e+01     no limits
     2 Mean         4.85239e+03  1.45572e+03     no limits
     3 Sigma        1.30256e+01  6.51282e+00    0.00000e+00  1.30256e+02
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
 FCN=65079.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.37758e+02   4.13274e+01   4.13274e+01  -5.58492e+02
   2  Mean         4.85239e+03   1.45572e+03   1.45572e+03   4.13472e+02
   3  Sigma        1.30256e+01   6.51282e+00   1.72186e-01  -6.59979e+05
NO ERROR MATRIX       
 FCN=22330.7 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=32823.6    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.50006e+02   4.13274e+01   1.22481e+01   8.18222e+02
   2  Mean         4.85211e+03   1.45572e+03  -2.80405e-01   5.28360e+01
   3  Sigma        1.83147e+01   6.51282e+00   1.25236e-01  -9.54168e+04
 FCN=63.4208 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=5.04685e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  11.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.17057e+02   2.25229e-01  -6.27480e-04   5.23332e-03
   2  Mean         4.85122e+03   1.97204e-01   2.20807e-03   4.54623e-03
   3  Sigma        4.29960e+01   6.93193e-01   2.34067e-05   1.25473e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6557e-01  9.6083e-01  1.7736e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=63.4208 FROM MIGRAD    STATUS=CONVERGED     135 CALLS         136 TOTAL
                     EDM=7.22596e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.17057e+02   2.25509e-01   6.05191e-04   5.23332e-03
   2  Mean         4.85122e+03   1.94294e-01   2.31324e-03   4.54674e-03
   3  Sigma        4.29960e+01   6.87191e-01   2.96743e-05   1.25527e-01
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.085e-02  3.485e-03 -1.126e-01 
  3.485e-03  3.775e-02 -2.479e-02 
 -1.126e-01 -2.479e-02  4.723e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72876   1.000  0.080 -0.727
        2  0.20240   0.080  1.000 -0.186
        3  0.73782  -0.727 -0.186  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.085e-02  3.485e-03 -1.126e-01 
  3.485e-03  3.775e-02 -2.479e-02 
 -1.126e-01 -2.479e-02  4.723e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.075005   0.0051401    -0.16607
Mean        	   0.0051401    0.055678   -0.036563
Sigma       	    -0.16607   -0.036563     0.69652

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.079541    -0.72658
Mean        	    0.079541           1    -0.18567
Sigma       	    -0.72658    -0.18567           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      63.4208
NDf                       =           43
Edm                       =  7.22596e-07
NCalls                    =          136
Constant                  =      117.057   +/-   0.273871    
Mean                      =      4851.22   +/-   0.235961    
Sigma                     =       42.996   +/-   0.834563     	 (limited)

```
---
```
Fit:  J

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   55 **SET PRINT           2
 **********
 **********
 **   56 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.35872e+02  4.07617e+01     no limits
     2 Mean         4.89780e+03  1.46934e+03     no limits
     3 Sigma        1.31050e+01  6.55252e+00    0.00000e+00  1.31050e+02
 **********
 **   57 **SET ERR           1
 **********
 **********
 **   58 **SET PRINT           2
 **********
 **********
 **   59 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   60 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=67687.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.35872e+02   4.07617e+01   4.07617e+01  -5.45130e+02
   2  Mean         4.89780e+03   1.46934e+03   1.46934e+03  -9.24819e+02
   3  Sigma        1.31050e+01   6.55252e+00   1.72186e-01  -6.58491e+05
NO ERROR MATRIX       
 FCN=23612.2 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=32109.8    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.47762e+02   4.07617e+01   1.18897e+01   8.00776e+02
   2  Mean         4.89847e+03   1.46934e+03   6.67573e-01  -1.64309e+02
   3  Sigma        1.85265e+01   6.55252e+00   1.27431e-01  -1.02910e+05
 FCN=127.762 FROM MIGRAD    STATUS=PROGRESS      124 CALLS         125 TOTAL
                     EDM=0.0871515    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  16.8 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14800e+02   2.20375e-01  -4.39215e-02  -5.78993e-01
   2  Mean         4.90238e+03   3.30690e-01  -2.09134e-01   1.56656e+00
   3  Sigma        5.21552e+01   1.27142e+00  -1.62557e-02  -2.61053e+01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.0669e-01  6.9000e-01  2.1033e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=127.716 FROM MIGRAD    STATUS=CONVERGED     156 CALLS         157 TOTAL
                     EDM=1.63321e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14790e+02   2.16789e-01   8.46090e-04  -1.89619e-03
   2  Mean         4.90233e+03   3.51434e-01   2.33762e-03  -1.15104e-03
   3  Sigma        5.22039e+01   1.22724e+00   6.11389e-05  -1.53218e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.700e-02 -1.673e-02 -1.785e-01 
 -1.673e-02  1.235e-01  2.598e-01 
 -1.785e-01  2.598e-01  1.506e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.70967   1.000 -0.220 -0.671
        2  0.65180  -0.220  1.000  0.602
        3  0.81715  -0.671  0.602  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.700e-02 -1.673e-02 -1.785e-01 
 -1.673e-02  1.235e-01  2.598e-01 
 -1.785e-01  2.598e-01  1.506e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.13959   -0.049704    -0.53023
Mean        	   -0.049704     0.36683     0.77175
Sigma       	    -0.53023     0.77175      4.4739

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.21965    -0.67095
Mean        	    -0.21965           1     0.60242
Sigma       	    -0.67095     0.60242           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      127.716
NDf                       =           43
Edm                       =  1.63321e-07
NCalls                    =          157
Constant                  =       114.79   +/-   0.373616    
Mean                      =      4902.33   +/-   0.605666    
Sigma                     =      52.2039   +/-   2.11504      	 (limited)

```
---
```
Fit:  K

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   61 **SET PRINT           2
 **********
 **********
 **   62 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.36202e+02  4.08606e+01     no limits
     2 Mean         5.10501e+03  1.53150e+03     no limits
     3 Sigma        1.43985e+01  7.19923e+00    0.00000e+00  1.43985e+02
 **********
 **   63 **SET ERR           1
 **********
 **********
 **   64 **SET PRINT           2
 **********
 **********
 **   65 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   66 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=68089.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.36202e+02   4.08606e+01   4.08606e+01  -6.05359e+02
   2  Mean         5.10501e+03   1.53150e+03   1.53150e+03   1.68502e+02
   3  Sigma        1.43985e+01   7.19923e+00   1.72186e-01  -7.04105e+05
NO ERROR MATRIX       
 FCN=23235 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=35175.6    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.48209e+02   4.08606e+01   1.20070e+01   8.94673e+02
   2  Mean         5.10488e+03   1.53150e+03  -1.27735e-01  -3.96337e+01
   3  Sigma        2.01767e+01   7.19923e+00   1.23871e-01  -9.85993e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7189e-01  9.9999e-01  1.7281e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=84.1612 FROM MIGRAD    STATUS=CONVERGED     128 CALLS         129 TOTAL
                     EDM=3.69288e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.16062e+02   2.15362e-01   6.65198e-04  -6.76200e-05
   2  Mean         5.10501e+03   1.77267e-01   2.43426e-03  -3.14087e-04
   3  Sigma        4.42922e+01   5.92408e-01   2.75392e-05   6.13103e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.638e-02 -2.666e-04 -9.289e-02 
 -2.666e-04  3.142e-02  1.065e-03 
 -9.289e-02  1.065e-03  3.510e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72809   1.000 -0.007 -0.728
        2  0.01016  -0.007  1.000  0.010
        3  0.72811  -0.728  0.010  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.638e-02 -2.666e-04 -9.289e-02 
 -2.666e-04  3.142e-02  1.065e-03 
 -9.289e-02  1.065e-03  3.510e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.081322 -0.00046748    -0.16287
Mean        	 -0.00046748    0.055097   0.0018676
Sigma       	    -0.16287   0.0018676     0.61535

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1  -0.0069839    -0.72809
Mean        	  -0.0069839           1    0.010143
Sigma       	    -0.72809    0.010143           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      84.1612
NDf                       =           48
Edm                       =  3.69288e-09
NCalls                    =          129
Constant                  =      116.062   +/-   0.28517     
Mean                      =      5105.01   +/-   0.234727    
Sigma                     =      44.2922   +/-   0.784434     	 (limited)

```
---
```
Fit:  L

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   67 **SET PRINT           2
 **********
 **********
 **   68 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.34722e+02  4.04166e+01     no limits
     2 Mean         5.15278e+03  1.54583e+03     no limits
     3 Sigma        1.30965e+01  6.54823e+00    0.00000e+00  1.30965e+02
 **********
 **   69 **SET ERR           1
 **********
 **********
 **   70 **SET PRINT           2
 **********
 **********
 **   71 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   72 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=66241 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.34722e+02   4.04166e+01   4.04166e+01  -5.44865e+02
   2  Mean         5.15278e+03   1.54583e+03   1.54583e+03  -8.49052e+02
   3  Sigma        1.30965e+01   6.54823e+00   1.72186e-01  -6.47258e+05
NO ERROR MATRIX       
 FCN=23032.7 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=31623.1    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.46613e+02   4.04166e+01   1.18909e+01   7.95783e+02
   2  Mean         5.15340e+03   1.54583e+03   6.21293e-01  -1.50957e+02
   3  Sigma        1.85088e+01   6.54823e+00   1.27309e-01  -1.00197e+05
 FCN=111.911 FROM MIGRAD    STATUS=PROGRESS      124 CALLS         125 TOTAL
                     EDM=0.00307144    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  17.2 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.13933e+02   2.21424e-01   4.54870e-03   5.49091e-01
   2  Mean         5.15680e+03   3.22169e-01  -1.55248e-01  -1.61377e-01
   3  Sigma        5.09206e+01   1.22503e+00  -4.45369e-03   4.69195e+00
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.1868e-01  7.2701e-01  2.0543e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=111.909 FROM MIGRAD    STATUS=CONVERGED     154 CALLS         155 TOTAL
                     EDM=2.28819e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.13925e+02   2.18439e-01   7.93164e-04   1.65950e-04
   2  Mean         5.15680e+03   3.24456e-01   2.45896e-03  -4.55281e-04
   3  Sigma        5.09361e+01   1.15060e+00   5.56462e-05   1.58310e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.772e-02 -1.501e-02 -1.721e-01 
 -1.501e-02  1.053e-01  2.076e-01 
 -1.721e-01  2.076e-01  1.324e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71430   1.000 -0.212 -0.685
        2  0.60256  -0.212  1.000  0.556
        3  0.80363  -0.685  0.556  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.772e-02 -1.501e-02 -1.721e-01 
 -1.501e-02  1.053e-01  2.076e-01 
 -1.721e-01  2.076e-01  1.324e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.12418   -0.039062    -0.44791
Mean        	   -0.039062     0.27397     0.54036
Sigma       	    -0.44791     0.54036      3.4458

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.21177    -0.68473
Mean        	    -0.21177           1     0.55614
Sigma       	    -0.68473     0.55614           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      111.909
NDf                       =           43
Edm                       =  2.28819e-08
NCalls                    =          155
Constant                  =      113.925   +/-   0.352393    
Mean                      =       5156.8   +/-   0.523423    
Sigma                     =      50.9361   +/-   1.85618      	 (limited)

```
---
```
Fit:  M

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   73 **SET PRINT           2
 **********
 **********
 **   74 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.34628e+02  4.03883e+01     no limits
     2 Mean         5.36481e+03  1.60944e+03     no limits
     3 Sigma        1.44476e+01  7.22380e+00    0.00000e+00  1.44476e+02
 **********
 **   75 **SET ERR           1
 **********
 **********
 **   76 **SET PRINT           2
 **********
 **********
 **   77 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   78 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=68472.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.34628e+02   4.03883e+01   4.03883e+01  -5.81511e+02
   2  Mean         5.36481e+03   1.60944e+03   1.60944e+03   5.96356e+02
   3  Sigma        1.44476e+01   7.22380e+00   1.72186e-01  -6.92517e+05
NO ERROR MATRIX       
 FCN=23703 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=34266.9    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.46126e+02   4.03883e+01   1.14984e+01   8.78116e+02
   2  Mean         5.36434e+03   1.60944e+03  -4.71781e-01   6.85405e+01
   3  Sigma        2.02877e+01   7.22380e+00   1.24711e-01  -1.02250e+05
 FCN=138.166 FROM MIGRAD    STATUS=PROGRESS      121 CALLS         122 TOTAL
                     EDM=1.70873e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   7.6 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14024e+02   2.16663e-01   1.47362e-03   5.90751e-04
   2  Mean         5.36286e+03   2.19707e-01  -9.32118e-04  -1.88204e-03
   3  Sigma        4.81170e+01   7.90833e-01  -4.82337e-05  -5.45763e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6004e-01  9.1848e-01  1.8215e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=138.166 FROM MIGRAD    STATUS=CONVERGED     137 CALLS         138 TOTAL
                     EDM=2.59558e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14024e+02   2.13527e-01   8.44458e-04   5.90751e-04
   2  Mean         5.36286e+03   2.18452e-01   2.55721e-03  -1.88134e-03
   3  Sigma        4.81170e+01   7.63551e-01   4.29426e-05  -5.44618e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.559e-02  5.419e-03 -1.177e-01 
  5.419e-03  4.772e-02 -4.582e-02 
 -1.177e-01 -4.582e-02  5.830e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72706   1.000  0.116 -0.722
        2  0.29924   0.116  1.000 -0.275
        3  0.74714  -0.722 -0.275  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.559e-02  5.419e-03 -1.177e-01 
  5.419e-03  4.772e-02 -4.582e-02 
 -1.177e-01 -4.582e-02  5.830e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.13124    0.015597    -0.33885
Mean        	    0.015597     0.13736    -0.13188
Sigma       	    -0.33885    -0.13188      1.6782

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.11617    -0.72202
Mean        	     0.11617           1    -0.27468
Sigma       	    -0.72202    -0.27468           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      138.166
NDf                       =           48
Edm                       =  2.59558e-07
NCalls                    =          138
Constant                  =      114.024   +/-   0.362271    
Mean                      =      5362.86   +/-   0.370627    
Sigma                     =       48.117   +/-   1.29544      	 (limited)

```
---
```
Fit:  N

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   79 **SET PRINT           2
 **********
 **********
 **   80 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.31957e+02  3.95870e+01     no limits
     2 Mean         5.41268e+03  1.62381e+03     no limits
     3 Sigma        1.30844e+01  6.54220e+00    0.00000e+00  1.30844e+02
 **********
 **   81 **SET ERR           1
 **********
 **********
 **   82 **SET PRINT           2
 **********
 **********
 **   83 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   84 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=63083.9 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.31957e+02   3.95870e+01   3.95870e+01  -5.43145e+02
   2  Mean         5.41268e+03   1.62381e+03   1.62381e+03  -6.03319e+02
   3  Sigma        1.30844e+01   6.54220e+00   1.72186e-01  -6.20708e+05
NO ERROR MATRIX       
 FCN=21858.3 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=30571.2    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.43820e+02   3.95870e+01   1.18630e+01   7.85080e+02
   2  Mean         5.41314e+03   1.62381e+03   4.56886e-01  -8.26870e+01
   3  Sigma        1.84896e+01   6.54220e+00   1.27261e-01  -9.41798e+04
 FCN=92.9468 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=7.81883e-05    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  14.5 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.11684e+02   2.22488e-01  -6.59712e-03   9.61050e-02
   2  Mean         5.41517e+03   2.83500e-01  -2.56629e-02  -1.82257e-02
   3  Sigma        4.92347e+01   1.09193e+00  -1.19999e-04   1.06517e+00
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.4792e-01  8.5529e-01  1.8968e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=92.9467 FROM MIGRAD    STATUS=CONVERGED     145 CALLS         146 TOTAL
                     EDM=4.55238e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.11683e+02   2.22443e-01   7.23801e-04  -1.37305e-03
   2  Mean         5.41517e+03   2.78288e-01   2.58215e-03   4.35179e-04
   3  Sigma        4.92343e+01   1.06201e+00   5.10945e-05  -2.79296e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.948e-02 -9.750e-03 -1.691e-01 
 -9.750e-03  7.744e-02  1.120e-01 
 -1.691e-01  1.120e-01  1.128e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72616   1.000 -0.158 -0.716
        2  0.41259  -0.158  1.000  0.379
        3  0.76481  -0.716  0.379  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.948e-02 -9.750e-03 -1.691e-01 
 -9.750e-03  7.744e-02  1.120e-01 
 -1.691e-01  1.120e-01  1.128e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.10696   -0.021076    -0.36547
Mean        	   -0.021076      0.1674     0.24217
Sigma       	    -0.36547     0.24217      2.4382

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.15751    -0.71567
Mean        	    -0.15751           1     0.37907
Sigma       	    -0.71567     0.37907           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      92.9467
NDf                       =           43
Edm                       =  4.55238e-08
NCalls                    =          146
Constant                  =      111.683   +/-   0.327041    
Mean                      =      5415.17   +/-   0.409145    
Sigma                     =      49.2343   +/-   1.5614       	 (limited)

```
---
```
Fit:  O

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   85 **SET PRINT           2
 **********
 **********
 **   86 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.34397e+02  4.03191e+01     no limits
     2 Mean         5.62729e+03  1.68819e+03     no limits
     3 Sigma        1.30547e+01  6.52735e+00    0.00000e+00  1.30547e+02
 **********
 **   87 **SET ERR           1
 **********
 **********
 **   88 **SET PRINT           2
 **********
 **********
 **   89 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   90 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=63688.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.34397e+02   4.03191e+01   4.03191e+01  -5.51948e+02
   2  Mean         5.62729e+03   1.68819e+03   1.68819e+03   6.09015e+02
   3  Sigma        1.30547e+01   6.52735e+00   1.72186e-01  -6.35975e+05
NO ERROR MATRIX       
 FCN=21921 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=31498.8    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.46477e+02   4.03191e+01   1.20802e+01   7.99458e+02
   2  Mean         5.62685e+03   1.68819e+03  -4.38780e-01   1.19501e+02
   3  Sigma        1.84047e+01   6.52735e+00   1.26318e-01  -9.38848e+04
 FCN=61.7816 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=3.21302e-06    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   9.9 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14088e+02   2.23918e-01  -1.18175e-03  -1.71434e-03
   2  Mean         5.62485e+03   2.42388e-01  -5.73666e-04  -1.01316e-02
   3  Sigma        4.57892e+01   8.75889e-01  -8.09842e-05  -2.32618e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.4993e-01  8.6018e-01  1.8899e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=61.7816 FROM MIGRAD    STATUS=CONVERGED     145 CALLS         146 TOTAL
                     EDM=7.5374e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.14088e+02   2.23112e-01   5.94936e-04  -3.62564e-04
   2  Mean         5.62485e+03   2.37590e-01   2.68214e-03   3.23181e-04
   3  Sigma        4.57901e+01   8.44783e-01   3.39412e-05   3.29118e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.978e-02  8.309e-03 -1.347e-01 
  8.309e-03  5.645e-02 -7.523e-02 
 -1.347e-01 -7.523e-02  7.137e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72455   1.000  0.157 -0.715
        2  0.40707   0.157  1.000 -0.375
        3  0.76251  -0.715 -0.375  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.978e-02  8.309e-03 -1.347e-01 
  8.309e-03  5.645e-02 -7.523e-02 
 -1.347e-01 -7.523e-02  7.137e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.071522    0.011939    -0.19352
Mean        	    0.011939    0.081105    -0.10809
Sigma       	    -0.19352    -0.10809      1.0254

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.15675    -0.71457
Mean        	     0.15675           1    -0.37482
Sigma       	    -0.71457    -0.37482           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      61.7816
NDf                       =           43
Edm                       =   7.5374e-09
NCalls                    =          146
Constant                  =      114.088   +/-   0.267436    
Mean                      =      5624.85   +/-   0.28479     
Sigma                     =      45.7901   +/-   1.01261      	 (limited)

```
---
```
Fit:  P

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   91 **SET PRINT           2
 **********
 **********
 **   92 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.32784e+02  3.98351e+01     no limits
     2 Mean         5.67523e+03  1.70257e+03     no limits
     3 Sigma        1.44792e+01  7.23958e+00    0.00000e+00  1.44792e+02
 **********
 **   93 **SET ERR           1
 **********
 **********
 **   94 **SET PRINT           2
 **********
 **********
 **   95 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   96 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=68972.9 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.32784e+02   3.98351e+01   3.98351e+01  -5.88645e+02
   2  Mean         5.67523e+03   1.70257e+03   1.70257e+03  -7.11127e+02
   3  Sigma        1.44792e+01   7.23958e+00   1.72186e-01  -6.86699e+05
NO ERROR MATRIX       
 FCN=23875 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=33733.5    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.44400e+02   3.98351e+01   1.16164e+01   8.68919e+02
   2  Mean         5.67581e+03   1.70257e+03   5.85617e-01  -8.42381e+01
   3  Sigma        2.03978e+01   7.23958e+00   1.26018e-01  -1.03379e+05
 FCN=158.704 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=9.13231e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  10.6 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.12442e+02   2.12430e-01   6.22957e-03  -3.74595e-03
   2  Mean         5.67795e+03   2.59980e-01   8.86197e-04  -4.45474e-04
   3  Sigma        5.12644e+01   9.38423e-01  -5.62952e-04  -1.53718e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5016e-01  8.5959e-01  1.8902e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=158.704 FROM MIGRAD    STATUS=CONVERGED     138 CALLS         139 TOTAL
                     EDM=1.34463e-06    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.12442e+02   2.11808e-01   9.00420e-04  -3.74595e-03
   2  Mean         5.67795e+03   2.58131e-01   2.70746e-03  -4.46359e-04
   3  Sigma        5.12644e+01   9.27312e-01   5.36269e-05  -1.53590e-01
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.486e-02 -8.410e-03 -1.404e-01 
 -8.410e-03  6.663e-02  8.903e-02 
 -1.404e-01  8.903e-02  8.600e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72479   1.000 -0.154 -0.715
        2  0.40492  -0.154  1.000  0.372
        3  0.76228  -0.715  0.372  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.486e-02 -8.410e-03 -1.404e-01 
 -8.410e-03  6.663e-02  8.903e-02 
 -1.404e-01  8.903e-02  8.600e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.14833   -0.027808    -0.46413
Mean        	   -0.027808     0.22031     0.29436
Sigma       	    -0.46413     0.29436      2.8433

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.15383    -0.71468
Mean        	    -0.15383           1     0.37193
Sigma       	    -0.71468     0.37193           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      158.704
NDf                       =           48
Edm                       =  1.34463e-06
NCalls                    =          139
Constant                  =      112.442   +/-   0.385137    
Mean                      =      5677.95   +/-   0.469368    
Sigma                     =      51.2644   +/-   1.68616      	 (limited)

```
---
```
Fit:  Q

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   97 **SET PRINT           2
 **********
 **********
 **   98 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.33450e+02  4.00350e+01     no limits
     2 Mean         5.89242e+03  1.76773e+03     no limits
     3 Sigma        1.30306e+01  6.51528e+00    0.00000e+00  1.30306e+02
 **********
 **   99 **SET ERR           1
 **********
 **********
 **  100 **SET PRINT           2
 **********
 **********
 **  101 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **  102 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=61823.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.33450e+02   4.00350e+01   4.00350e+01  -5.55950e+02
   2  Mean         5.89242e+03   1.76773e+03   1.76773e+03   2.46494e+02
   3  Sigma        1.30306e+01   6.51528e+00   1.72186e-01  -6.25230e+05
NO ERROR MATRIX       
 FCN=21120.8 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=31153.7    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.45638e+02   4.00350e+01   1.21881e+01   7.97748e+02
   2  Mean         5.89225e+03   1.76773e+03  -1.78413e-01   3.72532e+01
   3  Sigma        1.83504e+01   6.51528e+00   1.25870e-01  -8.98153e+04
 FCN=28.3734 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=9.71972e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  14.7 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.13573e+02   2.25902e-01  -4.50329e-05   3.10992e-03
   2  Mean         5.89163e+03   2.02657e-01   2.15943e-03   2.02158e-04
   3  Sigma        4.34621e+01   7.33852e-01  -1.83100e-05   6.05378e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6755e-01  9.8070e-01  1.7518e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=28.3734 FROM MIGRAD    STATUS=CONVERGED     135 CALLS         136 TOTAL
                     EDM=1.35705e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.13573e+02   2.25603e-01   4.08187e-04   3.10992e-03
   2  Mean         5.89163e+03   2.02348e-01   2.80935e-03   2.02628e-04
   3  Sigma        4.34621e+01   7.29725e-01   2.13459e-05   6.05621e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.090e-02  2.545e-03 -1.200e-01 
  2.545e-03  4.094e-02 -1.905e-02 
 -1.200e-01 -1.905e-02  5.325e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72976   1.000  0.056 -0.729
        2  0.14063   0.056  1.000 -0.129
        3  0.73410  -0.729 -0.129  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.090e-02  2.545e-03 -1.200e-01 
  2.545e-03  4.094e-02 -1.905e-02 
 -1.200e-01 -1.905e-02  5.325e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.033584   0.0016792   -0.079164
Mean        	   0.0016792    0.027017   -0.012573
Sigma       	   -0.079164   -0.012573     0.35138

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.055746    -0.72874
Mean        	    0.055746           1    -0.12904
Sigma       	    -0.72874    -0.12904           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      28.3734
NDf                       =           43
Edm                       =  1.35705e-07
NCalls                    =          136
Constant                  =      113.573   +/-   0.183259    
Mean                      =      5891.63   +/-   0.164369    
Sigma                     =      43.4621   +/-   0.592762     	 (limited)

```
---
```
Fit:  R

Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **  103 **SET PRINT           2
 **********
 **********
 **  104 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.31332e+02  3.93997e+01     no limits
     2 Mean         5.94744e+03  1.78423e+03     no limits
     3 Sigma        1.30329e+01  6.51647e+00    0.00000e+00  1.30329e+02
 **********
 **  105 **SET ERR           1
 **********
 **********
 **  106 **SET PRINT           2
 **********
 **********
 **  107 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **  108 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=60089.1 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.31332e+02   3.93997e+01   3.93997e+01  -5.44584e+02
   2  Mean         5.94744e+03   1.78423e+03   1.78423e+03  -7.01599e+01
   3  Sigma        1.30329e+01   6.51647e+00   1.72186e-01  -6.06640e+05
NO ERROR MATRIX       
 FCN=20571.5 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=30165.1    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.43269e+02   3.93997e+01   1.19369e+01   7.84173e+02
   2  Mean         5.94750e+03   1.78423e+03   5.26032e-02   7.44148e+01
   3  Sigma        1.83553e+01   6.51647e+00   1.25903e-01  -8.77911e+04
 FCN=54.0183 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=1.99076e-09    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  20.7 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.11690e+02   2.25249e-01  -2.94191e-04   3.57922e-04
   2  Mean         5.94692e+03   2.07383e-01   1.97252e-04  -1.16558e-04
   3  Sigma        4.37402e+01   7.53884e-01  -1.57770e-05   7.47624e-03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6852e-01  9.9063e-01  1.7408e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=54.0183 FROM MIGRAD    STATUS=CONVERGED     135 CALLS         136 TOTAL
                     EDM=2.49927e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.11690e+02   2.25528e-01   5.58286e-04   3.57922e-04
   2  Mean         5.94692e+03   2.07400e-01   2.83571e-03  -1.16262e-04
   3  Sigma        4.37402e+01   7.54904e-01   3.02570e-05   7.52156e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.086e-02  2.124e-03 -1.242e-01 
  2.124e-03  4.301e-02 -1.519e-02 
 -1.242e-01 -1.519e-02  5.699e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72996   1.000  0.045 -0.730
        2  0.10384   0.045  1.000 -0.097
        3  0.73231  -0.730 -0.097  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.086e-02  2.124e-03 -1.242e-01 
  2.124e-03  4.301e-02 -1.519e-02 
 -1.242e-01 -1.519e-02  5.699e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.063896   0.0026689    -0.15603
Mean        	   0.0026689    0.054037    -0.01908
Sigma       	    -0.15603    -0.01908     0.71594

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.04542    -0.72951
Mean        	     0.04542           1   -0.097004
Sigma       	    -0.72951   -0.097004           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      54.0183
NDf                       =           43
Edm                       =  2.49927e-09
NCalls                    =          136
Constant                  =       111.69   +/-   0.252777    
Mean                      =      5946.92   +/-   0.232458    
Sigma                     =      43.7402   +/-   0.846112     	 (limited)

```
---
