# Risultati analisi

## range e zone del fit (risultati riportati alla fine)

```

A:  3820 - 3860
B:  3880 - 3925
C:  4055 - 4100
D:  4125 - 4165
E:  4295 - 4335
F:  4365 - 4410
G:  4545 - 4585
H:  4610 - 4650
I:  4795 - 4835
J:  4860 - 4905
K:  5050 - 5090
L:  5115 - 5160
M:  5305 - 5350
N:  5375 - 5415
O:  5565 - 5610
P:  5635 - 5680
Q:  5835 - 5875
R:  5905 - 5950

```


## risultati analisi

```
 Valore in [pixel] dello splitting zeeman dei picchi
 I valori sono printati in ordine e con errore

 Zona Sinistra: 
 64.03 \pm 0.317885
 65.44 \pm 0.171587
 65.84 \pm 0.215011

 Zona Centrale: 
 67.49 \pm 0.254617
 68.17 \pm 0.189897
 69.25 \pm 0.191545

 Zona Destra:   
 71.39 \pm 0.241598
 71.99 \pm 0.256083
 73.69 \pm 0.201922

 ........................................................................................ 

 Valori in [pixel] della media aritmetica, per zona, della
 distanza tra i picchi dello split zeeman

 Zona Sinistra: 65.1033 \pm 0.242709

 Zona Centrale: 68.3033 \pm 0.214149

 Zona Destra:   72.3567 \pm 0.234322

 ........................................................................................ 

 Valori in [nm] della media aritmetica, per zona, della
 distanza tra i picchi dello split zeeman

 Zona Sinistra: 0.0109718 \pm 9.16458e-05

 Zona Centrale: 0.0115111 \pm 9.33049e-05

 Zona Destra:   0.0121942 \pm 9.93353e-05

 Matrice dei fattori di compatibilità tra le stime: 

            sx       cx       dx    
   sx        -    4.1235  9.04451
   cx        -        -    5.01236
   dx        -        -        -    

 ........................................................................................ 


 Valori di enegia [eV], per zona, dello split zeeman

 Zona Sinistra: 3.97139e-05 \pm 3.31724e-07

 Zona Centrale: 4.16659e-05 \pm 3.3773e-07

 Zona Destra:   4.41385e-05 \pm 3.59557e-07

 ........................................................................................ 

 Fattori di lande divisi per zona

 Zona Sinistra: 1.70895 \pm 0.0371016

 Zona Centrale: 1.79295 \pm 0.0387569

 Zona Destra:   1.89935 \pm 0.0410857

 Matrice dei fattori di compatibilità tra le stime: 

            sx       cx       dx    
   sx        -    1.56561  3.43938
   cx        -        -    1.8838
   dx        -        -        -    

 ........................................................................................ 

Medie pesate giusto perchè non si sa mai

Lambda zeeman [nm]: 0.0115261 \pm 5.46137e-05

Fattore di lande:   1.79397 \pm 0.0224472

 ........................................................................................ 

 Errore campo magnetico:0.0080226

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
     1 Constant     1.16896e+02  3.50688e+01     no limits
     2 Mean         3.84017e+03  1.15205e+03     no limits
     3 Sigma        1.16172e+01  5.80861e+00    0.00000e+00  1.16172e+02
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
 FCN=42659.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.16896e+02   3.50688e+01   3.50688e+01  -4.37577e+02
   2  Mean         3.84017e+03   1.15205e+03   1.15205e+03  -3.11855e+02
   3  Sigma        1.16172e+01   5.80861e+00   1.72186e-01  -4.30001e+05
NO ERROR MATRIX       
 FCN=14531.8 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=21353.1    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.27656e+02   3.50688e+01   1.07604e+01   6.22804e+02
   2  Mean         3.84043e+03   1.15205e+03   2.62204e-01  -1.01985e+02
   3  Sigma        1.63724e+01   5.80861e+00   1.26177e-01  -6.20388e+04
 FCN=2.68588 FROM MIGRAD    STATUS=PROGRESS      120 CALLS         121 TOTAL
                     EDM=1.15912e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   9.7 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     9.95915e+01   2.36967e-01  -1.06315e-03   3.24959e-03
   2  Mean         3.84194e+03   2.36563e-01  -9.21626e-04   9.93273e-04
   3  Sigma        3.91699e+01   8.22921e-01  -2.93538e-05   3.00056e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5687e-01  8.9731e-01  1.8458e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=2.68588 FROM MIGRAD    STATUS=CONVERGED     136 CALLS         137 TOTAL
                     EDM=1.84883e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     9.95915e+01   2.37250e-01   1.53143e-04   3.24959e-03
   2  Mean         3.84194e+03   2.32918e-01   1.83198e-03   9.92809e-04
   3  Sigma        3.91699e+01   8.11210e-01   9.12352e-06   3.00086e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.629e-02 -7.576e-03 -1.383e-01 
 -7.576e-03  5.425e-02  6.033e-02 
 -1.383e-01  6.033e-02  6.581e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72517   1.000 -0.137 -0.719
        2  0.34578  -0.137  1.000  0.319
        3  0.75236  -0.719  0.319  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.629e-02 -7.576e-03 -1.383e-01 
 -7.576e-03  5.425e-02  6.033e-02 
 -1.383e-01  6.033e-02  6.581e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0039785 -0.00053549  -0.0097755
Mean        	 -0.00053549   0.0038345   0.0042641
Sigma       	  -0.0097755   0.0042641    0.046516

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     -0.1371    -0.71859
Mean        	     -0.1371           1     0.31928
Sigma       	    -0.71859     0.31928           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      2.68588
NDf                       =           38
Edm                       =  1.84883e-07
NCalls                    =          137
Constant                  =      99.5915   +/-   0.063075    
Mean                      =      3841.94   +/-   0.0619234   
Sigma                     =      39.1699   +/-   0.215668     	 (limited)

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
     1 Constant     1.16770e+02  3.50309e+01     no limits
     2 Mean         3.90279e+03  1.17084e+03     no limits
     3 Sigma        1.30441e+01  6.52206e+00    0.00000e+00  1.30441e+02
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
 FCN=47614.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.16770e+02   3.50309e+01   3.50309e+01  -4.67607e+02
   2  Mean         3.90279e+03   1.17084e+03   1.17084e+03  -6.10502e+02
   3  Sigma        1.30441e+01   6.52206e+00   1.72186e-01  -4.77269e+05
NO ERROR MATRIX       
 FCN=16361.1 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=23417.4    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.27012e+02   3.50309e+01   1.02421e+01   6.87878e+02
   2  Mean         3.90337e+03   1.17084e+03   5.81997e-01  -1.23511e+02
   3  Sigma        1.83578e+01   6.52206e+00   1.25612e-01  -7.10904e+04
 FCN=54.8952 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=3.17959e-06    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  12.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     9.91521e+01   2.21264e-01  -2.99897e-03  -2.30634e-03
   2  Mean         3.90597e+03   2.89442e-01  -2.23556e-03  -8.89360e-03
   3  Sigma        4.48193e+01   9.43384e-01   3.99872e-04  -7.18401e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.3845e-01  7.9668e-01  1.9649e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=54.8952 FROM MIGRAD    STATUS=CONVERGED     146 CALLS         147 TOTAL
                     EDM=3.17173e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     9.91521e+01   2.21561e-01   5.62940e-04  -1.60744e-04
   2  Mean         3.90597e+03   2.75954e-01   1.86251e-03   2.15757e-05
   3  Sigma        4.48202e+01   9.14562e-01   3.37617e-05  -1.57708e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.909e-02 -1.150e-02 -1.419e-01 
 -1.150e-02  7.615e-02  1.180e-01 
 -1.419e-01  1.180e-01  8.365e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71804   1.000 -0.188 -0.701
        2  0.50667  -0.188  1.000  0.467
        3  0.77947  -0.701  0.467  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.909e-02 -1.150e-02 -1.419e-01 
 -1.150e-02  7.615e-02  1.180e-01 
 -1.419e-01  1.180e-01  8.365e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.062669   -0.014678    -0.18122
Mean        	   -0.014678    0.097216     0.15063
Sigma       	    -0.18122     0.15063      1.0679

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.18805     -0.7005
Mean        	    -0.18805           1     0.46749
Sigma       	     -0.7005     0.46749           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      54.8952
NDf                       =           43
Edm                       =  3.17173e-10
NCalls                    =          147
Constant                  =      99.1521   +/-   0.250337    
Mean                      =      3905.97   +/-   0.311795    
Sigma                     =      44.8202   +/-   1.03335      	 (limited)

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
     1 Constant     1.18725e+02  3.56175e+01     no limits
     2 Mean         4.07776e+03  1.22333e+03     no limits
     3 Sigma        1.29817e+01  6.49087e+00    0.00000e+00  1.29817e+02
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
 FCN=46792 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.18725e+02   3.56175e+01   3.56175e+01  -4.75218e+02
   2  Mean         4.07776e+03   1.22333e+03   1.22333e+03  -4.29800e+02
   3  Sigma        1.29817e+01   6.49087e+00   1.72186e-01  -4.83980e+05
NO ERROR MATRIX       
 FCN=15852.2 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=23964    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.29179e+02   3.56175e+01   1.04543e+01   6.99821e+02
   2  Mean         4.07814e+03   1.22333e+03   3.87227e-01  -1.37028e+02
   3  Sigma        1.81876e+01   6.49087e+00   1.23784e-01  -6.82437e+04
 FCN=4.6222 FROM MIGRAD    STATUS=PROGRESS      120 CALLS         121 TOTAL
                     EDM=1.94912e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   6.7 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.01354e+02   2.28942e-01   6.26622e-04   5.67811e-04
   2  Mean         4.07993e+03   2.05004e-01  -6.22024e-05   5.68004e-04
   3  Sigma        3.98009e+01   6.51007e-01  -2.18795e-05  -1.37323e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5757e-01  8.8298e-01  1.8595e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=4.6222 FROM MIGRAD    STATUS=CONVERGED     136 CALLS         137 TOTAL
                     EDM=3.08121e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.01354e+02   2.24598e-01   1.80301e-04   5.67811e-04
   2  Mean         4.07993e+03   2.04434e-01   1.94546e-03   5.67387e-04
   3  Sigma        3.98009e+01   6.37638e-01   8.11423e-06  -1.37275e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.044e-02 -6.746e-03 -1.021e-01 
 -6.746e-03  4.179e-02  4.503e-02 
 -1.021e-01  4.503e-02  4.066e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72058   1.000 -0.147 -0.713
        2  0.37334  -0.147  1.000  0.345
        3  0.75317  -0.713  0.345  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.044e-02 -6.746e-03 -1.021e-01 
 -6.746e-03  4.179e-02  4.503e-02 
 -1.021e-01  4.503e-02  4.066e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0054224  -0.0007251   -0.010973
Mean        	  -0.0007251   0.0044925   0.0048406
Sigma       	   -0.010973   0.0048406    0.043706

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.14691    -0.71276
Mean        	    -0.14691           1     0.34545
Sigma       	    -0.71276     0.34545           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =       4.6222
NDf                       =           43
Edm                       =  3.08121e-08
NCalls                    =          137
Constant                  =      101.354   +/-   0.0736371   
Mean                      =      4079.93   +/-   0.067026    
Sigma                     =      39.8009   +/-   0.209057     	 (limited)

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
     1 Constant     1.18905e+02  3.56715e+01     no limits
     2 Mean         4.14503e+03  1.24351e+03     no limits
     3 Sigma        1.16198e+01  5.80988e+00    0.00000e+00  1.16198e+02
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
 FCN=44351.9 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.18905e+02   3.56715e+01   3.56715e+01  -4.48856e+02
   2  Mean         4.14503e+03   1.24351e+03   1.24351e+03  -1.57127e+02
   3  Sigma        1.16198e+01   5.80988e+00   1.72186e-01  -4.46617e+05
NO ERROR MATRIX       
 FCN=15114.7 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=22202    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.29940e+02   3.56715e+01   1.10353e+01   6.35488e+02
   2  Mean         4.14516e+03   1.24351e+03   1.27846e-01   1.53917e+00
   3  Sigma        1.63854e+01   5.80988e+00   1.26409e-01  -6.43566e+04
 FCN=19.7552 FROM MIGRAD    STATUS=PROGRESS      120 CALLS         121 TOTAL
                     EDM=3.43168e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  20.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.01257e+02   2.39115e-01  -9.07816e-05   1.17557e-03
   2  Mean         4.14537e+03   2.18712e-01  -1.35390e-03   6.81979e-04
   3  Sigma        3.93524e+01   8.10492e-01  -3.31605e-05   2.44482e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6899e-01  9.9561e-01  1.7354e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=19.7552 FROM MIGRAD    STATUS=CONVERGED     136 CALLS         137 TOTAL
                     EDM=4.35475e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.01257e+02   2.38877e-01   3.62903e-04   1.17557e-03
   2  Mean         4.14537e+03   2.19070e-01   1.97667e-03   6.81872e-04
   3  Sigma        3.93524e+01   8.07195e-01   2.22729e-05   2.44652e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.706e-02 -1.264e-03 -1.408e-01 
 -1.264e-03  4.799e-02  1.032e-02 
 -1.408e-01  1.032e-02  6.516e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.73047   1.000 -0.024 -0.730
        2  0.06435  -0.024  1.000  0.058
        3  0.73137  -0.730  0.058  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.706e-02 -1.264e-03 -1.408e-01 
 -1.264e-03  4.799e-02  1.032e-02 
 -1.408e-01  1.032e-02  6.516e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.029665 -0.00065726   -0.073203
Mean        	 -0.00065726     0.02495   0.0053677
Sigma       	   -0.073203   0.0053677     0.33876

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.024159    -0.73024
Mean        	   -0.024159           1    0.058386
Sigma       	    -0.73024    0.058386           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      19.7552
NDf                       =           38
Edm                       =  4.35475e-08
NCalls                    =          137
Constant                  =      101.257   +/-   0.172235    
Mean                      =      4145.37   +/-   0.157955    
Sigma                     =      39.3524   +/-   0.582006     	 (limited)

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
     1 Constant     1.19886e+02  3.59659e+01     no limits
     2 Mean         4.31553e+03  1.29466e+03     no limits
     3 Sigma        1.16192e+01  5.80961e+00    0.00000e+00  1.16192e+02
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
 FCN=44828.3 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.19886e+02   3.59659e+01   3.59659e+01  -4.25520e+02
   2  Mean         4.31553e+03   1.29466e+03   1.29466e+03  -1.03115e+03
   3  Sigma        1.16192e+01   5.80961e+00   1.72186e-01  -4.47240e+05
NO ERROR MATRIX       
 FCN=15258.3 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=21652.4    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.30350e+02   3.59659e+01   1.04640e+01   6.20905e+02
   2  Mean         4.31636e+03   1.29466e+03   8.31386e-01  -3.25065e+02
   3  Sigma        1.63413e+01   5.80961e+00   1.25337e-01  -6.70676e+04
 FCN=6.44089 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=2.55806e-05    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  11.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02568e+02   2.24647e-01   1.75192e-02  -2.03929e-02
   2  Mean         4.32129e+03   3.42529e-01  -9.92115e-04   1.99478e-02
   3  Sigma        3.98997e+01   8.81750e-01  -8.12070e-04  -9.52992e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.6021e-01  5.8958e-01  2.2502e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=6.44088 FROM MIGRAD    STATUS=CONVERGED     146 CALLS         147 TOTAL
                     EDM=6.37356e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02567e+02   2.23411e-01   2.19300e-04   1.34591e-03
   2  Mean         4.32129e+03   3.32359e-01   2.06055e-03   7.91246e-04
   3  Sigma        3.99026e+01   8.40015e-01   1.02960e-05  -1.73951e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.991e-02 -1.494e-02 -1.096e-01 
 -1.494e-02  1.105e-01  2.060e-01 
 -1.096e-01  2.060e-01  7.057e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.67593   1.000 -0.201 -0.584
        2  0.79026  -0.201  1.000  0.738
        3  0.86147  -0.584  0.738  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.991e-02 -1.494e-02 -1.096e-01 
 -1.494e-02  1.105e-01  2.060e-01 
 -1.096e-01  2.060e-01  7.057e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.00846  -0.0025327   -0.018578
Mean        	  -0.0025327    0.018723    0.034918
Sigma       	   -0.018578    0.034918     0.11961

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.20124    -0.58402
Mean        	    -0.20124           1     0.73786
Sigma       	    -0.58402     0.73786           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      6.44088
NDf                       =           38
Edm                       =  6.37356e-08
NCalls                    =          147
Constant                  =      102.567   +/-   0.0919784   
Mean                      =      4321.29   +/-   0.136832    
Sigma                     =      39.9026   +/-   0.345834     	 (limited)

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
     1 Constant     1.20018e+02  3.60055e+01     no limits
     2 Mean         4.38746e+03  1.31624e+03     no limits
     3 Sigma        1.29841e+01  6.49203e+00    0.00000e+00  1.29841e+02
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
 FCN=48017.1 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.20018e+02   3.60055e+01   3.60055e+01  -4.88231e+02
   2  Mean         4.38746e+03   1.31624e+03   1.31624e+03  -5.28289e+01
   3  Sigma        1.29841e+01   6.49203e+00   1.72186e-01  -4.96694e+05
NO ERROR MATRIX       
 FCN=16289.2 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=24735.7    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.30757e+02   3.60055e+01   1.07384e+01   7.12372e+02
   2  Mean         4.38750e+03   1.31624e+03   4.65328e-02   4.93786e+01
   3  Sigma        1.82057e+01   6.49203e+00   1.24116e-01  -6.94144e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7212e-01  9.9620e-01  1.7317e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=32.6016 FROM MIGRAD    STATUS=CONVERGED     130 CALLS         131 TOTAL
                     EDM=3.22247e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02430e+02   2.26513e-01   4.40063e-04  -1.11516e-04
   2  Mean         4.38713e+03   1.90473e-01   2.09195e-03  -3.80625e-05
   3  Sigma        3.98723e+01   6.32979e-01   2.05027e-05  -1.49857e-04
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.131e-02  1.294e-03 -1.042e-01 
  1.294e-03  3.628e-02 -7.606e-03 
 -1.042e-01 -7.606e-03  4.007e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72723   1.000  0.030 -0.727
        2  0.06718   0.030  1.000 -0.063
        3  0.72823  -0.727 -0.063  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.131e-02  1.294e-03 -1.042e-01 
  1.294e-03  3.628e-02 -7.606e-03 
 -1.042e-01 -7.606e-03  4.007e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	      0.0389  0.00098136   -0.079036
Mean        	  0.00098136    0.027506  -0.0057664
Sigma       	   -0.079036  -0.0057664     0.30378

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.030001    -0.72706
Mean        	    0.030001           1   -0.063082
Sigma       	    -0.72706   -0.063082           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      32.6016
NDf                       =           43
Edm                       =  3.22247e-10
NCalls                    =          131
Constant                  =       102.43   +/-   0.197232    
Mean                      =      4387.13   +/-   0.165851    
Sigma                     =      39.8723   +/-   0.551155     	 (limited)

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
     1 Constant     1.22171e+02  3.66514e+01     no limits
     2 Mean         4.56512e+03  1.36953e+03     no limits
     3 Sigma        1.16035e+01  5.80176e+00    0.00000e+00  1.16035e+02
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
 FCN=45850.3 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.22171e+02   3.66514e+01   3.66514e+01  -4.52482e+02
   2  Mean         4.56512e+03   1.36953e+03   1.36953e+03  -2.21724e+02
   3  Sigma        1.16035e+01   5.80176e+00   1.72186e-01  -4.66088e+05
NO ERROR MATRIX       
 FCN=15603.1 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=23183.3    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.33310e+02   3.66514e+01   1.11388e+01   6.49756e+02
   2  Mean         4.56529e+03   1.36953e+03   1.69943e-01  -7.75586e+01
   3  Sigma        1.63267e+01   5.80176e+00   1.25521e-01  -6.65897e+04
 FCN=4.04095 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=8.84215e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  10.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.04104e+02   2.38308e-01  -3.68445e-04   2.26497e-03
   2  Mean         4.56624e+03   2.05686e-01  -1.25526e-03  -1.73987e-03
   3  Sigma        3.79318e+01   7.12179e-01   1.09348e-05   4.83914e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6514e-01  9.5283e-01  1.7820e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=4.04095 FROM MIGRAD    STATUS=CONVERGED     135 CALLS         136 TOTAL
                     EDM=1.31021e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.04104e+02   2.38618e-01   1.79494e-04   2.26498e-03
   2  Mean         4.56624e+03   2.03484e-01   2.17735e-03  -1.74037e-03
   3  Sigma        3.79318e+01   7.07833e-01   9.60368e-06   4.83956e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.694e-02 -4.484e-03 -1.224e-01 
 -4.484e-03  4.141e-02  3.031e-02 
 -1.224e-01  3.031e-02  5.011e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72746   1.000 -0.092 -0.725
        2  0.22788  -0.092  1.000  0.210
        3  0.73904  -0.725  0.210  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.694e-02 -4.484e-03 -1.224e-01 
 -4.484e-03  4.141e-02  3.031e-02 
 -1.224e-01  3.031e-02  5.011e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0060549 -0.00047686   -0.013019
Mean        	 -0.00047686   0.0044031   0.0032237
Sigma       	   -0.013019   0.0032237    0.053283

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.092355    -0.72485
Mean        	   -0.092355           1     0.21046
Sigma       	    -0.72485     0.21046           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      4.04095
NDf                       =           38
Edm                       =  1.31021e-07
NCalls                    =          136
Constant                  =      104.104   +/-   0.0778131   
Mean                      =      4566.24   +/-   0.066356    
Sigma                     =      37.9318   +/-   0.230824     	 (limited)

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
     1 Constant     1.21090e+02  3.63270e+01     no limits
     2 Mean         4.63028e+03  1.38908e+03     no limits
     3 Sigma        1.16485e+01  5.82425e+00    0.00000e+00  1.16485e+02
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
 FCN=46898.4 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.21090e+02   3.63270e+01   3.63270e+01  -4.43376e+02
   2  Mean         4.63028e+03   1.38908e+03   1.38908e+03  -6.45990e+02
   3  Sigma        1.16485e+01   5.82425e+00   1.72186e-01  -4.64090e+05
NO ERROR MATRIX       
 FCN=16133.5 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=22776.6    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.31967e+02   3.63270e+01   1.08767e+01   6.39523e+02
   2  Mean         4.63079e+03   1.38908e+03   5.14935e-01  -1.59029e+02
   3  Sigma        1.64419e+01   5.82425e+00   1.26803e-01  -6.98993e+04
 FCN=26.0493 FROM MIGRAD    STATUS=PROGRESS      124 CALLS         125 TOTAL
                     EDM=1.38996e-05    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  13.1 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02827e+02   2.31511e-01  -6.30243e-03   3.26180e-02
   2  Mean         4.63373e+03   3.13030e-01  -5.08057e-03  -1.34899e-02
   3  Sigma        4.24551e+01   1.02393e+00   5.12562e-04   2.60368e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.2254e-01  7.3903e-01  2.0384e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=26.0493 FROM MIGRAD    STATUS=CONVERGED     147 CALLS         148 TOTAL
                     EDM=3.87064e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02827e+02   2.32123e-01   4.13182e-04   4.62096e-04
   2  Mean         4.63373e+03   2.96899e-01   2.20954e-03   5.55154e-04
   3  Sigma        4.24566e+01   9.92425e-01   2.70189e-05   1.12540e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.388e-02 -1.451e-02 -1.580e-01 
 -1.451e-02  8.815e-02  1.607e-01 
 -1.580e-01  1.607e-01  9.850e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71323   1.000 -0.211 -0.686
        2  0.58981  -0.211  1.000  0.545
        3  0.79923  -0.686  0.545  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.388e-02 -1.451e-02 -1.580e-01 
 -1.451e-02  8.815e-02  1.607e-01 
 -1.580e-01  1.607e-01  9.850e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.036936  -0.0099468    -0.10834
Mean        	  -0.0099468    0.060427     0.11015
Sigma       	    -0.10834     0.11015     0.67523

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.21054    -0.68603
Mean        	    -0.21054           1      0.5453
Sigma       	    -0.68603      0.5453           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      26.0493
NDf                       =           38
Edm                       =  3.87064e-08
NCalls                    =          148
Constant                  =      102.827   +/-   0.192187    
Mean                      =      4633.73   +/-   0.245818    
Sigma                     =      42.4566   +/-   0.821682     	 (limited)

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
     1 Constant     1.22408e+02  3.67225e+01     no limits
     2 Mean         4.81504e+03  1.44451e+03     no limits
     3 Sigma        1.16112e+01  5.80560e+00    0.00000e+00  1.16112e+02
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
 FCN=46437.7 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.22408e+02   3.67225e+01   3.67225e+01  -4.57528e+02
   2  Mean         4.81504e+03   1.44451e+03   1.44451e+03  -6.99229e+01
   3  Sigma        1.16112e+01   5.80560e+00   1.72186e-01  -4.70206e+05
NO ERROR MATRIX       
 FCN=15816.7 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=23412.7    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.33664e+02   3.67225e+01   1.12561e+01   6.52991e+02
   2  Mean         4.81509e+03   1.44451e+03   5.35266e-02  -2.65599e+01
   3  Sigma        1.63544e+01   5.80560e+00   1.25939e-01  -6.73685e+04
 FCN=3.19056 FROM MIGRAD    STATUS=PROGRESS      120 CALLS         121 TOTAL
                     EDM=5.01883e-09    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  20.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.04254e+02   2.39189e-01  -1.01813e-04   4.28480e-04
   2  Mean         4.81542e+03   2.04872e-01  -5.93986e-04   3.18439e-04
   3  Sigma        3.85663e+01   7.42259e-01  -1.80692e-05   9.36396e-03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6919e-01  9.9391e-01  1.7369e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=3.19056 FROM MIGRAD    STATUS=CONVERGED     136 CALLS         137 TOTAL
                     EDM=6.3369e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.04254e+02   2.39093e-01   1.63350e-04   4.28480e-04
   2  Mean         4.81542e+03   2.05236e-01   2.29617e-03   3.18256e-04
   3  Sigma        3.85663e+01   7.40559e-01   9.23276e-06   9.36742e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.717e-02 -1.617e-03 -1.292e-01 
 -1.617e-03  4.212e-02  1.124e-02 
 -1.292e-01  1.124e-02  5.485e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72994   1.000 -0.033 -0.730
        2  0.08006  -0.033  1.000  0.074
        3  0.73134  -0.730  0.074  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.717e-02 -1.617e-03 -1.292e-01 
 -1.617e-03  4.212e-02  1.124e-02 
 -1.292e-01  1.124e-02  5.485e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0047997 -0.00013576   -0.010847
Mean        	 -0.00013576   0.0035366  0.00094355
Sigma       	   -0.010847  0.00094355     0.04605

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.032952    -0.72963
Mean        	   -0.032952           1    0.073936
Sigma       	    -0.72963    0.073936           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      3.19056
NDf                       =           38
Edm                       =   6.3369e-09
NCalls                    =          137
Constant                  =      104.254   +/-   0.06928     
Mean                      =      4815.42   +/-   0.0594695   
Sigma                     =      38.5663   +/-   0.214586     	 (limited)

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
     1 Constant     1.21255e+02  3.63764e+01     no limits
     2 Mean         4.88260e+03  1.46478e+03     no limits
     3 Sigma        1.30022e+01  6.50109e+00    0.00000e+00  1.30022e+02
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
 FCN=49767.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.21255e+02   3.63764e+01   3.63764e+01  -4.94068e+02
   2  Mean         4.88260e+03   1.46478e+03   1.46478e+03  -3.03103e+02
   3  Sigma        1.30022e+01   6.50109e+00   1.72186e-01  -5.10129e+05
NO ERROR MATRIX       
 FCN=16928.7 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=25322    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.32108e+02   3.63764e+01   1.08530e+01   7.19636e+02
   2  Mean         4.88287e+03   1.46478e+03   2.63502e-01  -3.47884e+01
   3  Sigma        1.82568e+01   6.50109e+00   1.24683e-01  -7.24779e+04
 FCN=34.1958 FROM MIGRAD    STATUS=PROGRESS      118 CALLS         119 TOTAL
                     EDM=1.02956e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   8.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.03335e+02   2.26207e-01   1.07120e-05  -1.45810e-04
   2  Mean         4.88359e+03   2.04212e-01   1.59550e-04   6.56456e-04
   3  Sigma        4.11651e+01   6.96365e-01  -1.21739e-05  -1.43348e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6861e-01  9.7153e-01  1.7599e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=34.1958 FROM MIGRAD    STATUS=CONVERGED     134 CALLS         135 TOTAL
                     EDM=1.55652e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.03335e+02   2.25891e-01   4.49081e-04  -1.45809e-04
   2  Mean         4.88359e+03   2.02233e-01   2.32868e-03   6.56073e-04
   3  Sigma        4.11651e+01   6.86874e-01   2.23505e-05  -1.43051e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.103e-02 -3.067e-03 -1.126e-01 
 -3.067e-03  4.090e-02  2.182e-02 
 -1.126e-01  2.182e-02  4.718e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72732   1.000 -0.067 -0.726
        2  0.17126  -0.067  1.000  0.157
        3  0.73386  -0.726  0.157  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.103e-02 -3.067e-03 -1.126e-01 
 -3.067e-03  4.090e-02  2.182e-02 
 -1.126e-01  2.182e-02  4.718e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.040579  -0.0024387   -0.089555
Mean        	  -0.0024387    0.032524    0.017356
Sigma       	   -0.089555    0.017356     0.37521

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.067128    -0.72577
Mean        	   -0.067128           1     0.15711
Sigma       	    -0.72577     0.15711           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      34.1958
NDf                       =           43
Edm                       =  1.55652e-08
NCalls                    =          135
Constant                  =      103.335   +/-   0.201443    
Mean                      =      4883.59   +/-   0.180345    
Sigma                     =      41.1651   +/-   0.612533     	 (limited)

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
     1 Constant     1.22585e+02  3.67754e+01     no limits
     2 Mean         5.06992e+03  1.52098e+03     no limits
     3 Sigma        1.16257e+01  5.81286e+00    0.00000e+00  1.16257e+02
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
 FCN=47171.9 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.22585e+02   3.67754e+01   3.67754e+01  -4.58890e+02
   2  Mean         5.06992e+03   1.52098e+03   1.52098e+03   1.89537e+02
   3  Sigma        1.16257e+01   5.81286e+00   1.72186e-01  -4.73823e+05
NO ERROR MATRIX       
 FCN=16128.2 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=23570.8    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.33861e+02   3.67754e+01   1.12768e+01   6.54335e+02
   2  Mean         5.06977e+03   1.52098e+03  -1.45530e-01   4.91509e+01
   3  Sigma        1.63953e+01   5.81286e+00   1.26444e-01  -6.87691e+04
 FCN=6.45429 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=4.96687e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  17.6 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.04255e+02   2.38994e-01   2.42998e-04   5.38753e-03
   2  Mean         5.06903e+03   2.20197e-01   3.93720e-03  -1.51325e-03
   3  Sigma        3.99047e+01   8.21943e-01  -7.24546e-05   1.02717e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6567e-01  9.7005e-01  1.7643e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=6.45429 FROM MIGRAD    STATUS=CONVERGED     135 CALLS         136 TOTAL
                     EDM=6.66367e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.04255e+02   2.38458e-01   2.17279e-04   5.38753e-03
   2  Mean         5.06903e+03   2.20983e-01   2.41710e-03  -1.51283e-03
   3  Sigma        3.99047e+01   8.16588e-01   1.33356e-05   1.02724e-01
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.686e-02  3.779e-03 -1.418e-01 
  3.779e-03  4.883e-02 -2.959e-02 
 -1.418e-01 -2.959e-02  6.669e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72996   1.000  0.072 -0.728
        2  0.17814   0.072  1.000 -0.164
        3  0.73692  -0.728 -0.164  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.686e-02  3.779e-03 -1.418e-01 
  3.779e-03  4.883e-02 -2.959e-02 
 -1.418e-01 -2.959e-02  6.669e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0096581  0.00064187    -0.02409
Mean        	  0.00064187   0.0082944  -0.0050257
Sigma       	    -0.02409  -0.0050257     0.11327

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.071715    -0.72835
Mean        	    0.071715           1    -0.16396
Sigma       	    -0.72835    -0.16396           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      6.45429
NDf                       =           38
Edm                       =  6.66367e-07
NCalls                    =          136
Constant                  =      104.255   +/-   0.0982754   
Mean                      =      5069.03   +/-   0.0910735   
Sigma                     =      39.9047   +/-   0.336539     	 (limited)

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
     1 Constant     1.21367e+02  3.64102e+01     no limits
     2 Mean         5.13757e+03  1.54127e+03     no limits
     3 Sigma        1.30062e+01  6.50310e+00    0.00000e+00  1.30062e+02
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
 FCN=50115.1 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.21367e+02   3.64102e+01   3.64102e+01  -4.98657e+02
   2  Mean         5.13757e+03   1.54127e+03   1.54127e+03  -2.41689e+02
   3  Sigma        1.30062e+01   6.50310e+00   1.72186e-01  -5.12705e+05
NO ERROR MATRIX       
 FCN=17043.4 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=25484.5    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.32318e+02   3.64102e+01   1.09507e+01   7.22097e+02
   2  Mean         5.13778e+03   1.54127e+03   2.09910e-01  -1.85273e+01
   3  Sigma        1.82745e+01   6.50310e+00   1.24949e-01  -7.27912e+04
 FCN=29.4872 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=1.05993e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   9.7 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.03443e+02   2.25792e-01  -1.62866e-04   7.74344e-04
   2  Mean         5.13828e+03   2.05421e-01  -5.80725e-04  -6.02892e-04
   3  Sigma        4.14733e+01   7.03731e-01   5.67242e-06   1.76768e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6978e-01  9.8500e-01  1.7452e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=29.4872 FROM MIGRAD    STATUS=CONVERGED     135 CALLS         136 TOTAL
                     EDM=1.59437e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.03443e+02   2.26000e-01   4.17610e-04   7.74343e-04
   2  Mean         5.13828e+03   2.03488e-01   2.45012e-03  -6.03191e-04
   3  Sigma        4.14733e+01   7.00692e-01   2.12501e-05   1.77024e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.108e-02 -2.190e-03 -1.152e-01 
 -2.190e-03  4.141e-02  1.598e-02 
 -1.152e-01  1.598e-02  4.910e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72818   1.000 -0.048 -0.727
        2  0.12244  -0.048  1.000  0.112
        3  0.73150  -0.727  0.112  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.108e-02 -2.190e-03 -1.152e-01 
 -2.190e-03  4.141e-02  1.598e-02 
 -1.152e-01  1.598e-02  4.910e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.035025  -0.0015021    -0.07899
Mean        	  -0.0015021    0.028395    0.010956
Sigma       	    -0.07899    0.010956      0.3367

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.047632    -0.72738
Mean        	   -0.047632           1     0.11205
Sigma       	    -0.72738     0.11205           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      29.4872
NDf                       =           43
Edm                       =  1.59437e-08
NCalls                    =          136
Constant                  =      103.443   +/-   0.18715     
Mean                      =      5138.28   +/-   0.168508    
Sigma                     =      41.4733   +/-   0.580243     	 (limited)

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
     1 Constant     1.21194e+02  3.63582e+01     no limits
     2 Mean         5.32742e+03  1.59822e+03     no limits
     3 Sigma        1.30078e+01  6.50390e+00    0.00000e+00  1.30078e+02
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
 FCN=49572.2 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.21194e+02   3.63582e+01   3.63582e+01  -4.86612e+02
   2  Mean         5.32742e+03   1.59822e+03   1.59822e+03   1.71389e+02
   3  Sigma        1.30078e+01   6.50390e+00   1.72186e-01  -5.07442e+05
NO ERROR MATRIX       
 FCN=16947.9 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=25254.9    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.31879e+02   3.63582e+01   1.06850e+01   7.18318e+02
   2  Mean         5.32727e+03   1.59822e+03  -1.49416e-01   4.17452e+01
   3  Sigma        1.82608e+01   6.50390e+00   1.24598e-01  -7.26528e+04
 FCN=14.9067 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=1.12628e-09    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   6.6 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.03075e+02   2.27835e-01   1.75384e-04   8.19705e-07
   2  Mean         5.32663e+03   2.05826e-01   1.03823e-04  -1.23080e-04
   3  Sigma        4.15734e+01   7.20988e-01  -1.15719e-05  -4.93922e-03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6893e-01  9.8116e-01  1.7499e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=14.9067 FROM MIGRAD    STATUS=CONVERGED     135 CALLS         136 TOTAL
                     EDM=1.79349e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.03075e+02   2.26008e-01   3.01590e-04   8.19781e-07
   2  Mean         5.32663e+03   2.05562e-01   2.53994e-03  -1.22729e-04
   3  Sigma        4.15734e+01   7.08658e-01   1.54844e-05  -4.92584e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.108e-02  2.638e-03 -1.165e-01 
  2.638e-03  4.226e-02 -1.888e-02 
 -1.165e-01 -1.888e-02  5.022e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72833   1.000  0.057 -0.727
        2  0.14065   0.057  1.000 -0.130
        3  0.73271  -0.727 -0.130  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.108e-02  2.638e-03 -1.165e-01 
  2.638e-03  4.226e-02 -1.888e-02 
 -1.165e-01 -1.888e-02  5.022e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.017708  0.00091447   -0.040386
Mean        	  0.00091447    0.014649  -0.0065455
Sigma       	   -0.040386  -0.0065455      0.1741

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.05678    -0.72735
Mean        	     0.05678           1    -0.12961
Sigma       	    -0.72735    -0.12961           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      14.9067
NDf                       =           43
Edm                       =  1.79349e-09
NCalls                    =          136
Constant                  =      103.075   +/-   0.13307     
Mean                      =      5326.63   +/-   0.121032    
Sigma                     =      41.5734   +/-   0.417247     	 (limited)

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
     1 Constant     1.19846e+02  3.59538e+01     no limits
     2 Mean         5.39522e+03  1.61857e+03     no limits
     3 Sigma        1.16515e+01  5.82577e+00    0.00000e+00  1.16515e+02
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
 FCN=46350.1 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.19846e+02   3.59538e+01   3.59538e+01  -4.49906e+02
   2  Mean         5.39522e+03   1.61857e+03   1.61857e+03  -5.16282e+02
   3  Sigma        1.16515e+01   5.82577e+00   1.72186e-01  -4.58077e+05
NO ERROR MATRIX       
 FCN=15906.3 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=22577.8    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.30880e+02   3.59538e+01   1.10341e+01   6.37779e+02
   2  Mean         5.39564e+03   1.61857e+03   4.20158e-01  -1.23710e+02
   3  Sigma        1.64685e+01   5.82577e+00   1.27353e-01  -6.83940e+04
 FCN=20.0947 FROM MIGRAD    STATUS=PROGRESS      123 CALLS         124 TOTAL
                     EDM=2.10896e-05    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  12.6 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.01834e+02   2.36044e-01  -1.93302e-03   3.14870e-02
   2  Mean         5.39802e+03   2.94172e-01   1.02757e-03   1.50804e-02
   3  Sigma        4.27713e+01   1.05105e+00  -4.38267e-04   1.68916e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.3725e-01  7.9813e-01  1.9646e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=20.0947 FROM MIGRAD    STATUS=CONVERGED     147 CALLS         148 TOTAL
                     EDM=4.21957e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.01833e+02   2.34085e-01   3.64259e-04   3.72882e-04
   2  Mean         5.39802e+03   2.87537e-01   2.57398e-03  -3.19694e-04
   3  Sigma        4.27727e+01   1.02195e+00   2.55142e-05   4.96542e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.480e-02 -1.271e-02 -1.682e-01 
 -1.271e-02  8.268e-02  1.369e-01 
 -1.682e-01  1.369e-01  1.045e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72010   1.000 -0.189 -0.703
        2  0.50484  -0.189  1.000  0.466
        3  0.78041  -0.703  0.466  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.480e-02 -1.271e-02 -1.682e-01 
 -1.271e-02  8.268e-02  1.369e-01 
 -1.682e-01  1.369e-01  1.045e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.028976  -0.0067202    -0.08892
Mean        	  -0.0067202    0.043721    0.072376
Sigma       	    -0.08892    0.072376     0.55234

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.18881    -0.70287
Mean        	    -0.18881           1     0.46575
Sigma       	    -0.70287     0.46575           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      20.0947
NDf                       =           38
Edm                       =  4.21957e-09
NCalls                    =          148
Constant                  =      101.833   +/-   0.170225    
Mean                      =      5398.02   +/-   0.209095    
Sigma                     =      42.7727   +/-   0.743155     	 (limited)

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
     1 Constant     1.20673e+02  3.62018e+01     no limits
     2 Mean         5.58764e+03  1.67629e+03     no limits
     3 Sigma        1.30001e+01  6.50003e+00    0.00000e+00  1.30001e+02
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
 FCN=49375.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.20673e+02   3.62018e+01   3.62018e+01  -4.98706e+02
   2  Mean         5.58764e+03   1.67629e+03   1.67629e+03  -2.37554e+02
   3  Sigma        1.30001e+01   6.50003e+00   1.72186e-01  -5.06566e+05
NO ERROR MATRIX       
 FCN=16735.1 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=25207.9    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.31629e+02   3.62018e+01   1.09566e+01   7.18566e+02
   2  Mean         5.58784e+03   1.67629e+03   2.08186e-01  -7.64100e+01
   3  Sigma        1.82620e+01   6.50003e+00   1.24866e-01  -7.13511e+04
 FCN=3.94453 FROM MIGRAD    STATUS=PROGRESS      118 CALLS         119 TOTAL
                     EDM=9.42539e-09    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   7.9 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02992e+02   2.25996e-01   5.23561e-05  -1.63152e-04
   2  Mean         5.58887e+03   2.05137e-01   1.61222e-04   6.13989e-04
   3  Sigma        4.10401e+01   6.92645e-01  -1.29360e-05  -1.50414e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6670e-01  9.5547e-01  1.7778e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=3.94453 FROM MIGRAD    STATUS=CONVERGED     134 CALLS         135 TOTAL
                     EDM=1.44827e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02992e+02   2.25639e-01   1.68399e-04  -1.63152e-04
   2  Mean         5.58887e+03   2.03610e-01   2.66498e-03   6.13363e-04
   3  Sigma        4.10401e+01   6.83423e-01   8.29762e-06  -1.50372e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.091e-02 -4.105e-03 -1.116e-01 
 -4.105e-03  4.146e-02  2.841e-02 
 -1.116e-01  2.841e-02  4.671e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72630   1.000 -0.089 -0.724
        2  0.22099  -0.089  1.000  0.204
        3  0.73726  -0.724  0.204  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.091e-02 -4.105e-03 -1.116e-01 
 -4.105e-03  4.146e-02  2.841e-02 
 -1.116e-01  2.841e-02  4.671e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0046704 -0.00037657    -0.01024
Mean        	 -0.00037657    0.003803   0.0026058
Sigma       	    -0.01024   0.0026058    0.042847

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.089352    -0.72385
Mean        	   -0.089352           1     0.20413
Sigma       	    -0.72385     0.20413           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      3.94453
NDf                       =           43
Edm                       =  1.44827e-08
NCalls                    =          135
Constant                  =      102.992   +/-   0.0683403   
Mean                      =      5588.87   +/-   0.0616683   
Sigma                     =      41.0401   +/-   0.206992     	 (limited)

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
     1 Constant     1.20080e+02  3.60239e+01     no limits
     2 Mean         5.65778e+03  1.69733e+03     no limits
     3 Sigma        1.30440e+01  6.52202e+00    0.00000e+00  1.30440e+02
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
 FCN=50544.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.20080e+02   3.60239e+01   3.60239e+01  -4.87909e+02
   2  Mean         5.65778e+03   1.69733e+03   1.69733e+03  -5.95620e+02
   3  Sigma        1.30440e+01   6.52202e+00   1.72186e-01  -5.06681e+05
NO ERROR MATRIX       
 FCN=17321.6 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=24913.2    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.30766e+02   3.60239e+01   1.06868e+01   7.10034e+02
   2  Mean         5.65832e+03   1.69733e+03   5.37382e-01  -1.33690e+02
   3  Sigma        1.83693e+01   6.52202e+00   1.25868e-01  -7.50183e+04
 FCN=37.3751 FROM MIGRAD    STATUS=PROGRESS      124 CALLS         125 TOTAL
                     EDM=9.6244e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  10.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02066e+02   2.15281e-01   6.00533e-03  -1.08187e-02
   2  Mean         5.66086e+03   2.66870e-01  -2.79167e-03   1.27875e-03
   3  Sigma        4.48405e+01   8.69366e-01  -4.62952e-04  -1.51678e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.4018e-01  8.0495e-01  1.9549e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=37.3751 FROM MIGRAD    STATUS=CONVERGED     140 CALLS         141 TOTAL
                     EDM=1.44968e-06    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02066e+02   2.21727e-01   4.66328e-04  -1.08187e-02
   2  Mean         5.66086e+03   2.66595e-01   2.69931e-03   1.27752e-03
   3  Sigma        4.48405e+01   8.89265e-01   2.73772e-05  -1.51647e-01
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.916e-02 -1.095e-02 -1.385e-01 
 -1.095e-02  7.107e-02  1.083e-01 
 -1.385e-01  1.083e-01  7.908e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71868   1.000 -0.185 -0.702
        2  0.49513  -0.185  1.000  0.457
        3  0.77709  -0.702  0.457  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.916e-02 -1.095e-02 -1.385e-01 
 -1.095e-02  7.107e-02  1.083e-01 
 -1.385e-01  1.083e-01  7.908e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.042732  -0.0095169    -0.12037
Mean        	  -0.0095169    0.061776    0.094167
Sigma       	    -0.12037    0.094167     0.68739

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.18523     -0.7023
Mean        	    -0.18523           1     0.45697
Sigma       	     -0.7023     0.45697           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      37.3751
NDf                       =           43
Edm                       =  1.44968e-06
NCalls                    =          141
Constant                  =      102.066   +/-   0.206717    
Mean                      =      5660.86   +/-   0.248547    
Sigma                     =      44.8405   +/-   0.829064     	 (limited)

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
     1 Constant     1.20190e+02  3.60570e+01     no limits
     2 Mean         5.85505e+03  1.75652e+03     no limits
     3 Sigma        1.16282e+01  5.81410e+00    0.00000e+00  1.16282e+02
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
 FCN=45644.7 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.20190e+02   3.60570e+01   3.60570e+01  -4.54977e+02
   2  Mean         5.85505e+03   1.75652e+03   1.75652e+03  -1.07043e+02
   3  Sigma        1.16282e+01   5.81410e+00   1.72186e-01  -4.57699e+05
NO ERROR MATRIX       
 FCN=15581.3 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=22761.3    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.31368e+02   3.60570e+01   1.11785e+01   6.43062e+02
   2  Mean         5.85514e+03   1.75652e+03   8.56600e-02  -3.08492e+01
   3  Sigma        1.64101e+01   5.81410e+00   1.26725e-01  -6.63747e+04
 FCN=5.25522 FROM MIGRAD    STATUS=PROGRESS      120 CALLS         121 TOTAL
                     EDM=1.22801e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  21.2 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02275e+02   2.38619e-01  -4.08043e-04   1.92061e-03
   2  Mean         5.85561e+03   2.25457e-01  -1.78983e-03   1.25154e-03
   3  Sigma        4.01641e+01   8.49670e-01  -5.15266e-05   4.27286e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6742e-01  9.8725e-01  1.7453e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=5.25522 FROM MIGRAD    STATUS=CONVERGED     136 CALLS         137 TOTAL
                     EDM=1.54031e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02275e+02   2.38599e-01   1.98904e-04   1.92061e-03
   2  Mean         5.85561e+03   2.26137e-01   2.79217e-03   1.25121e-03
   3  Sigma        4.01641e+01   8.47493e-01   1.27230e-05   4.27337e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.693e-02 -2.540e-03 -1.476e-01 
 -2.540e-03  5.114e-02  2.041e-02 
 -1.476e-01  2.041e-02  7.183e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.73076   1.000 -0.047 -0.730
        2  0.11554  -0.047  1.000  0.106
        3  0.73367  -0.730  0.106  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.693e-02 -2.540e-03 -1.476e-01 
 -2.540e-03  5.114e-02  2.041e-02 
 -1.476e-01  2.041e-02  7.183e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0078731 -0.00035122   -0.020418
Mean        	 -0.00035122   0.0070721    0.002822
Sigma       	   -0.020418    0.002822    0.099338

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.047069    -0.73011
Mean        	   -0.047069           1     0.10647
Sigma       	    -0.73011     0.10647           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      5.25522
NDf                       =           38
Edm                       =  1.54031e-07
NCalls                    =          137
Constant                  =      102.275   +/-   0.0887303   
Mean                      =      5855.61   +/-   0.084096    
Sigma                     =      40.1641   +/-   0.315166     	 (limited)

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
     1 Constant     1.18359e+02  3.55078e+01     no limits
     2 Mean         5.92766e+03  1.77830e+03     no limits
     3 Sigma        1.30313e+01  6.51567e+00    0.00000e+00  1.30313e+02
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
 FCN=48738.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.18359e+02   3.55078e+01   3.55078e+01  -4.89020e+02
   2  Mean         5.92766e+03   1.77830e+03   1.77830e+03  -3.60242e+02
   3  Sigma        1.30313e+01   6.51567e+00   1.72186e-01  -4.92261e+05
NO ERROR MATRIX       
 FCN=16640.1 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=24380.4    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.29080e+02   3.55078e+01   1.07203e+01   7.04617e+02
   2  Mean         5.92799e+03   1.77830e+03   3.32333e-01  -6.60104e+01
   3  Sigma        1.83477e+01   6.51567e+00   1.25787e-01  -7.13876e+04
 FCN=26.0461 FROM MIGRAD    STATUS=PROGRESS      118 CALLS         119 TOTAL
                     EDM=6.85592e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  10.4 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.00716e+02   2.24729e-01  -8.36664e-04   1.71046e-03
   2  Mean         5.92930e+03   2.40419e-01  -1.76671e-04   1.28923e-03
   3  Sigma        4.35894e+01   8.48926e-01  -6.68524e-06   1.70964e-03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6149e-01  9.2663e-01  1.8119e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=26.0461 FROM MIGRAD    STATUS=CONVERGED     134 CALLS         135 TOTAL
                     EDM=1.02569e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.00716e+02   2.24642e-01   3.91795e-04   1.71046e-03
   2  Mean         5.92930e+03   2.35875e-01   2.82731e-03   1.28847e-03
   3  Sigma        4.35894e+01   8.29546e-01   2.28569e-05   1.73186e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.046e-02 -5.935e-03 -1.346e-01 
 -5.935e-03  5.564e-02  5.123e-02 
 -1.346e-01  5.123e-02  6.882e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72682   1.000 -0.112 -0.722
        2  0.28461  -0.112  1.000  0.262
        3  0.74500  -0.722  0.262  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.046e-02 -5.935e-03 -1.346e-01 
 -5.935e-03  5.564e-02  5.123e-02 
 -1.346e-01  5.123e-02  6.882e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.030567  -0.0035951   -0.081546
Mean        	  -0.0035951    0.033701    0.031034
Sigma       	   -0.081546    0.031034     0.41685

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.11201    -0.72241
Mean        	    -0.11201           1     0.26184
Sigma       	    -0.72241     0.26184           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      26.0461
NDf                       =           43
Edm                       =  1.02569e-07
NCalls                    =          135
Constant                  =      100.716   +/-   0.174835    
Mean                      =       5929.3   +/-   0.183577    
Sigma                     =      43.5894   +/-   0.645621     	 (limited)

```
---
