# Risultati analisi

## range e zone del fit (risultati riportati alla fine)

```

A:  3560 - 3400
B:  3440 - 3480
C:  3595 - 3630
D:  3670 - 3710
E:  3825 - 3865
F:  3910 - 3945
G:  4065 - 4105
H:  4145 - 4185
I:  4305 - 4345
J:  4390 - 4430
K:  4550 - 4585
L:  4635 - 4675
M:  4795 - 4835
N:  4885 - 4925
O:  5050 - 5090
P:  5135 - 5180
Q:  5305 - 5345
R:  5395 - 5435

```


## risultati analisi

```
 Valore in [pixel] dello splitting zeeman dei picchi
 I valori sono printati in ordine e con errore

 Zona Sinistra: 
 80.62 \pm 0.138965
 82.27 \pm 0.10931
 83.35 \pm 0.106816

 Zona Centrale: 
 84.4 \pm 0.136192
 85.45 \pm 0.174146
 86.84 \pm 0.141732

 Zona Destra:   
 88.15 \pm 0.146484
 89.39 \pm 0.158137
 91.43 \pm 0.128569

 ........................................................................................ 

 Valori in [pixel] della media aritmetica, per zona, della
 distanza tra i picchi dello split zeeman

 Zona Sinistra: 82.08 \pm 0.119261

 Zona Centrale: 85.5633 \pm 0.151617

 Zona Destra:   89.6567 \pm 0.144908

 ........................................................................................ 

 Valori in [nm] della media aritmetica, per zona, della
 distanza tra i picchi dello split zeeman

 Zona Sinistra: 0.0138329 \pm 0.000105332

 Zona Centrale: 0.0144199 \pm 0.000110772

 Zona Destra:   0.0151097 \pm 0.000115552

 Matrice dei fattori di compatibilità tra le stime: 

            sx       cx       dx    
   sx        -    3.84046  8.16657
   cx        -        -    4.30963
   dx        -        -        -    

 ........................................................................................ 


 Valori di enegia [eV], per zona, dello split zeeman

 Zona Sinistra: 5.00699e-05 \pm 3.81265e-07

 Zona Centrale: 5.21948e-05 \pm 4.00955e-07

 Zona Destra:   5.46918e-05 \pm 4.18254e-07

 ........................................................................................ 

 Fattori di lande divisi per zona

 Zona Sinistra: 1.79706 \pm 0.0385036

 Zona Centrale: 1.87333 \pm 0.0401826

 Zona Destra:   1.96295 \pm 0.0420808

 Matrice dei fattori di compatibilità tra le stime: 

            sx       cx       dx    
   sx        -    1.37037  2.90831
   cx        -        -    1.54027
   dx        -        -        -    

 ........................................................................................ 

Medie pesate giusto perchè non si sa mai

Lambda zeeman [nm]: 0.0144149 \pm 6.36901e-05

Fattore di lande:   1.87288 \pm 0.0231958

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
     1 Constant     8.09482e+01  2.42845e+01     no limits
     2 Mean         3.37994e+03  1.01398e+03     no limits
     3 Sigma        1.14536e+01  5.72679e+00    0.00000e+00  1.14536e+02
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
 FCN=17420.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.09482e+01   2.42845e+01   2.42845e+01  -2.78526e+02
   2  Mean         3.37994e+03   1.01398e+03   1.01398e+03   4.40338e+01
   3  Sigma        1.14536e+01   5.72679e+00   1.72186e-01  -1.92163e+05
NO ERROR MATRIX       
 FCN=5752.88 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9518.97    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.78867e+01   2.42845e+01   6.93846e+00   4.19583e+02
   2  Mean         3.37987e+03   1.01398e+03  -7.30514e-02   1.68562e+01
   3  Sigma        1.58744e+01   5.72679e+00   1.19442e-01  -2.45089e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.8111e-01  9.9577e-01  1.7231e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=2.61169 FROM MIGRAD    STATUS=CONVERGED     117 CALLS         118 TOTAL
                     EDM=2.24374e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.97479e+01   2.42061e-01   1.56290e-04  -2.74250e-04
   2  Mean         3.37961e+03   1.89808e-01   1.61153e-03   8.05593e-04
   3  Sigma        2.94877e+01   5.20496e-01   6.70381e-06  -1.69642e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.859e-02  1.261e-03 -9.046e-02 
  1.261e-03  3.603e-02 -6.163e-03 
 -9.046e-02 -6.163e-03  2.709e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71822   1.000  0.027 -0.718
        2  0.06718   0.027  1.000 -0.062
        3  0.71928  -0.718 -0.062  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.859e-02  1.261e-03 -9.046e-02 
  1.261e-03  3.603e-02 -6.163e-03 
 -9.046e-02 -6.163e-03  2.709e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0040271  8.6671e-05  -0.0062175
Mean        	  8.6671e-05   0.0024761 -0.00042358
Sigma       	  -0.0062175 -0.00042358     0.01862

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.027447    -0.71801
Mean        	    0.027447           1   -0.062383
Sigma       	    -0.71801   -0.062383           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      2.61169
NDf                       =           38
Edm                       =  2.24374e-08
NCalls                    =          118
Constant                  =      69.7479   +/-   0.0634591   
Mean                      =      3379.61   +/-   0.0497603   
Sigma                     =      29.4877   +/-   0.136454     	 (limited)


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
     1 Constant     7.95580e+01  2.38674e+01     no limits
     2 Mean         3.46003e+03  1.03801e+03     no limits
     3 Sigma        1.14758e+01  5.73792e+00    0.00000e+00  1.14758e+02
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
 FCN=17252.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.95580e+01   2.38674e+01   2.38674e+01  -2.77180e+02
   2  Mean         3.46003e+03   1.03801e+03   1.03801e+03  -7.65691e+01
   3  Sigma        1.14758e+01   5.73792e+00   1.72186e-01  -1.87794e+05
NO ERROR MATRIX       
 FCN=5722.79 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9292.36    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.64506e+01   2.38674e+01   6.89262e+00   4.14055e+02
   2  Mean         3.46016e+03   1.03801e+03   1.32638e-01   3.67506e+00
   3  Sigma        1.59440e+01   5.73792e+00   1.20419e-01  -2.44373e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.8004e-01  9.9860e-01  1.7214e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=15.4165 FROM MIGRAD    STATUS=CONVERGED     117 CALLS         118 TOTAL
                     EDM=6.86876e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.84455e+01   2.41598e-01   3.31794e-04   6.81623e-04
   2  Mean         3.46023e+03   2.03709e-01   1.64997e-03   1.19633e-03
   3  Sigma        3.04090e+01   5.76990e-01   1.56473e-05   3.19654e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.837e-02 -5.686e-04 -1.003e-01 
 -5.686e-04  4.150e-02  3.637e-03 
 -1.003e-01  3.637e-03  3.329e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71980   1.000 -0.012 -0.720
        2  0.03458  -0.012  1.000  0.031
        3  0.72008  -0.720  0.031  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.837e-02 -5.686e-04 -1.003e-01 
 -5.686e-04  4.150e-02  3.637e-03 
 -1.003e-01  3.637e-03  3.329e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.02368 -0.00023068   -0.040704
Mean        	 -0.00023068    0.016835   0.0014756
Sigma       	   -0.040704   0.0014756     0.13507

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.011553    -0.71972
Mean        	   -0.011553           1    0.030944
Sigma       	    -0.71972    0.030944           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      15.4165
NDf                       =           38
Edm                       =  6.86876e-08
NCalls                    =          118
Constant                  =      68.4455   +/-   0.153884    
Mean                      =      3460.23   +/-   0.129751    
Sigma                     =       30.409   +/-   0.367511     	 (limited)


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
     1 Constant     8.09358e+01  2.42807e+01     no limits
     2 Mean         3.61225e+03  1.08367e+03     no limits
     3 Sigma        1.01393e+01  5.06963e+00    0.00000e+00  1.01393e+02
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
 FCN=16853.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.09358e+01   2.42807e+01   2.42807e+01  -2.57398e+02
   2  Mean         3.61225e+03   1.08367e+03   1.08367e+03   2.16381e+02
   3  Sigma        1.01393e+01   5.06963e+00   1.72186e-01  -1.75955e+05
NO ERROR MATRIX       
 FCN=5652.74 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=8705.72    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.81843e+01   2.42807e+01   7.24857e+00   3.73588e+02
   2  Mean         3.61192e+03   1.08367e+03  -3.25459e-01   8.55024e+01
   3  Sigma        1.41912e+01   5.06963e+00   1.23385e-01  -2.42244e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5463e-01  8.5752e-01  1.8879e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=1.80365 FROM MIGRAD    STATUS=CONVERGED     129 CALLS         130 TOTAL
                     EDM=5.46929e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.93881e+01   2.53430e-01   1.44564e-04  -4.00212e-03
   2  Mean         3.61031e+03   2.52016e-01   1.72153e-03  -3.41166e-03
   3  Sigma        3.00205e+01   7.42369e-01   8.54782e-06  -8.92031e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.423e-02  1.044e-02 -1.329e-01 
  1.044e-02  6.351e-02 -7.276e-02 
 -1.329e-01 -7.276e-02  5.512e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71637   1.000  0.164 -0.706
        2  0.41938   0.164  1.000 -0.389
        3  0.75860  -0.706 -0.389  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.423e-02  1.044e-02 -1.329e-01 
  1.044e-02  6.351e-02 -7.276e-02 
 -1.329e-01 -7.276e-02  5.512e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0035104  0.00057075  -0.0072615
Mean        	  0.00057075   0.0034713   -0.003977
Sigma       	  -0.0072615   -0.003977    0.030124

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1      0.1635    -0.70614
Mean        	      0.1635           1    -0.38891
Sigma       	    -0.70614    -0.38891           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      1.80365
NDf                       =           33
Edm                       =  5.46929e-07
NCalls                    =          130
Constant                  =      69.3881   +/-   0.0592485   
Mean                      =      3610.31   +/-   0.0589181   
Sigma                     =      30.0205   +/-   0.173556     	 (limited)


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
     1 Constant     7.98487e+01  2.39546e+01     no limits
     2 Mean         3.69035e+03  1.10711e+03     no limits
     3 Sigma        1.14834e+01  5.74170e+00    0.00000e+00  1.14834e+02
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
 FCN=17523.1 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.98487e+01   2.39546e+01   2.39546e+01  -2.75617e+02
   2  Mean         3.69035e+03   1.10711e+03   1.10711e+03  -3.10183e+02
   3  Sigma        1.14834e+01   5.74170e+00   1.72186e-01  -1.89147e+05
NO ERROR MATRIX       
 FCN=5795.41 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9260.4    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.66989e+01   2.39546e+01   6.85016e+00   4.11824e+02
   2  Mean         3.69089e+03   1.10711e+03   5.35636e-01  -8.86462e+01
   3  Sigma        1.59565e+01   5.74170e+00   1.20470e-01  -2.51053e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5933e-01  8.5862e-01  1.8820e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=6.29967 FROM MIGRAD    STATUS=CONVERGED     117 CALLS         118 TOTAL
                     EDM=3.00061e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.87456e+01   2.38741e-01   2.21407e-04   3.46675e-03
   2  Mean         3.69258e+03   2.26132e-01   1.76076e-03  -2.92555e-03
   3  Sigma        3.08445e+01   5.99840e-01   1.02077e-05   6.82674e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.700e-02 -8.636e-03 -1.004e-01 
 -8.636e-03  5.114e-02  5.243e-02 
 -1.004e-01  5.243e-02  3.598e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71122   1.000 -0.160 -0.701
        2  0.41670  -0.160  1.000  0.387
        3  0.75408  -0.701  0.387  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.700e-02 -8.636e-03 -1.004e-01 
 -8.636e-03  5.114e-02  5.243e-02 
 -1.004e-01  5.243e-02  3.598e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0094491  -0.0014316   -0.016642
Mean        	  -0.0014316   0.0084773   0.0086925
Sigma       	   -0.016642   0.0086925    0.059652

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.15996    -0.70097
Mean        	    -0.15996           1     0.38655
Sigma       	    -0.70097     0.38655           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      6.29967
NDf                       =           38
Edm                       =  3.00061e-07
NCalls                    =          118
Constant                  =      68.7456   +/-   0.0972063   
Mean                      =      3692.58   +/-   0.0920724   
Sigma                     =      30.8445   +/-   0.244232     	 (limited)


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
     1 Constant     8.08536e+01  2.42561e+01     no limits
     2 Mean         3.84493e+03  1.15348e+03     no limits
     3 Sigma        1.14485e+01  5.72424e+00    0.00000e+00  1.14485e+02
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
 FCN=17307.4 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.08536e+01   2.42561e+01   2.42561e+01  -2.78428e+02
   2  Mean         3.84493e+03   1.15348e+03   1.15348e+03   5.28866e+01
   3  Sigma        1.14485e+01   5.72424e+00   1.72186e-01  -1.91414e+05
NO ERROR MATRIX       
 FCN=5707.05 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9484.71    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.77925e+01   2.42561e+01   6.93887e+00   4.18980e+02
   2  Mean         3.84484e+03   1.15348e+03  -8.77738e-02   2.15465e+01
   3  Sigma        1.58611e+01   5.72424e+00   1.19286e-01  -2.42596e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.8122e-01  9.9356e-01  1.7252e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=2.89147 FROM MIGRAD    STATUS=CONVERGED     118 CALLS         119 TOTAL
                     EDM=1.45739e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.97127e+01   2.42129e-01   1.62395e-04   1.34393e-04
   2  Mean         3.84452e+03   1.87941e-01   1.83321e-03  -1.24281e-04
   3  Sigma        2.92920e+01   5.11352e-01   6.84921e-06   6.27861e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.863e-02  1.552e-03 -8.883e-02 
  1.552e-03  3.532e-02 -7.435e-03 
 -8.883e-02 -7.435e-03  2.615e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71775   1.000  0.034 -0.717
        2  0.08323   0.034  1.000 -0.077
        3  0.71938  -0.717 -0.077  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.863e-02  1.552e-03 -8.883e-02 
  1.552e-03  3.532e-02 -7.435e-03 
 -8.883e-02 -7.435e-03  2.615e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.004461  0.00011811  -0.0067591
Mean        	  0.00011811   0.0026877 -0.00056574
Sigma       	  -0.0067591 -0.00056574    0.019897

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.034111    -0.71743
Mean        	    0.034111           1   -0.077363
Sigma       	    -0.71743   -0.077363           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      2.89147
NDf                       =           38
Edm                       =  1.45739e-09
NCalls                    =          119
Constant                  =      69.7127   +/-   0.0667906   
Mean                      =      3844.52   +/-   0.0518428   
Sigma                     =       29.292   +/-   0.141055     	 (limited)


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
     1 Constant     8.10480e+01  2.43144e+01     no limits
     2 Mean         3.92754e+03  1.17826e+03     no limits
     3 Sigma        1.01500e+01  5.07502e+00    0.00000e+00  1.01500e+02
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
 FCN=17126.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.10480e+01   2.43144e+01   2.43144e+01  -2.61952e+02
   2  Mean         3.92754e+03   1.17826e+03   1.17826e+03  -6.98026e+01
   3  Sigma        1.01500e+01   5.07502e+00   1.72186e-01  -1.78061e+05
NO ERROR MATRIX       
 FCN=5756.57 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=8837.82    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.84173e+01   2.43144e+01   7.36927e+00   3.76968e+02
   2  Mean         3.92764e+03   1.17826e+03   1.05134e-01  -6.19749e+00
   3  Sigma        1.42305e+01   5.07502e+00   1.24074e-01  -2.45841e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7335e-01  9.9460e-01  1.7321e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=4.99479 FROM MIGRAD    STATUS=CONVERGED     129 CALLS         130 TOTAL
                     EDM=6.73793e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.93599e+01   2.56068e-01   2.10551e-04  -1.73876e-04
   2  Mean         3.92787e+03   2.40051e-01   1.87295e-03   1.08610e-05
   3  Sigma        3.05824e+01   7.80184e-01   1.37504e-05  -7.34751e-04
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.557e-02 -1.740e-03 -1.450e-01 
 -1.740e-03  5.762e-02  1.252e-02 
 -1.450e-01  1.252e-02  6.087e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72592   1.000 -0.028 -0.726
        2  0.07301  -0.028  1.000  0.067
        3  0.72712  -0.726  0.067  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.557e-02 -1.740e-03 -1.450e-01 
 -1.740e-03  5.762e-02  1.252e-02 
 -1.450e-01  1.252e-02  6.087e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0099246 -0.00026333   -0.021943
Mean        	 -0.00026333   0.0087219   0.0018949
Sigma       	   -0.021943   0.0018949    0.092138

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.028303    -0.72564
Mean        	   -0.028303           1    0.066843
Sigma       	    -0.72564    0.066843           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      4.99479
NDf                       =           33
Edm                       =  6.73793e-10
NCalls                    =          130
Constant                  =      69.3599   +/-   0.0996222   
Mean                      =      3927.87   +/-   0.0933911   
Sigma                     =      30.5824   +/-   0.303528     	 (limited)


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
     1 Constant     8.18289e+01  2.45487e+01     no limits
     2 Mean         4.08455e+03  1.22536e+03     no limits
     3 Sigma        1.14609e+01  5.73045e+00    0.00000e+00  1.14609e+02
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
 FCN=18038.3 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.18289e+01   2.45487e+01   2.45487e+01  -2.80751e+02
   2  Mean         4.08455e+03   1.22536e+03   1.22536e+03   3.40602e+02
   3  Sigma        1.14609e+01   5.73045e+00   1.72186e-01  -1.96558e+05
NO ERROR MATRIX       
 FCN=5944.43 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9648.17    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.88196e+01   2.45487e+01   6.99067e+00   4.20288e+02
   2  Mean         4.08399e+03   1.22536e+03  -5.55000e-01   1.32329e+02
   3  Sigma        1.58922e+01   5.73045e+00   1.19637e-01  -2.55450e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5203e-01  8.2124e-01  1.9267e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=4.31573 FROM MIGRAD    STATUS=CONVERGED     117 CALLS         118 TOTAL
                     EDM=6.0513e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.06488e+01   2.37965e-01   1.89871e-04   7.96618e-05
   2  Mean         4.08193e+03   2.16770e-01   1.94642e-03  -1.76693e-03
   3  Sigma        2.99971e+01   5.41604e-01   7.79596e-06  -1.88428e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.663e-02  9.452e-03 -8.905e-02 
  9.452e-03  4.699e-02 -5.275e-02 
 -8.905e-02 -5.275e-02  2.933e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.70545   1.000  0.183 -0.691
        2  0.48249   0.183  1.000 -0.449
        3  0.76494  -0.691 -0.449  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.663e-02  9.452e-03 -8.905e-02 
  9.452e-03  4.699e-02 -5.275e-02 
 -8.905e-02 -5.275e-02  2.933e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0064313   0.0010735   -0.010114
Mean        	   0.0010735   0.0053367  -0.0059906
Sigma       	   -0.010114  -0.0059906    0.033316

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.18324    -0.69094
Mean        	     0.18324           1    -0.44927
Sigma       	    -0.69094    -0.44927           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      4.31573
NDf                       =           38
Edm                       =   6.0513e-08
NCalls                    =          118
Constant                  =      70.6488   +/-   0.0801951   
Mean                      =      4081.93   +/-   0.0730524   
Sigma                     =      29.9971   +/-   0.182523     	 (limited)


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
     1 Constant     8.19414e+01  2.45824e+01     no limits
     2 Mean         4.16518e+03  1.24955e+03     no limits
     3 Sigma        1.14924e+01  5.74621e+00    0.00000e+00  1.14924e+02
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
 FCN=18631.1 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.19414e+01   2.45824e+01   2.45824e+01  -2.88786e+02
   2  Mean         4.16518e+03   1.24955e+03   1.24955e+03  -1.93879e+02
   3  Sigma        1.14924e+01   5.74621e+00   1.72186e-01  -2.00759e+05
NO ERROR MATRIX       
 FCN=6180.66 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9913.35    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.91132e+01   2.45824e+01   7.17187e+00   4.27150e+02
   2  Mean         4.16550e+03   1.24955e+03   3.18331e-01  -4.12287e+01
   3  Sigma        1.59954e+01   5.74621e+00   1.21132e-01  -2.64663e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7364e-01  9.5307e-01  1.7733e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=11.2597 FROM MIGRAD    STATUS=CONVERGED     119 CALLS         120 TOTAL
                     EDM=1.67541e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.04732e+01   2.40601e-01   2.86008e-04   2.07696e-03
   2  Mean         4.16633e+03   2.11158e-01   1.98666e-03   1.49216e-03
   3  Sigma        3.11570e+01   6.00071e-01   1.37094e-05   5.17186e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.789e-02 -4.517e-03 -1.034e-01 
 -4.517e-03  4.459e-02  2.641e-02 
 -1.034e-01  2.641e-02  3.601e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71872   1.000 -0.089 -0.716
        2  0.22567  -0.089  1.000  0.208
        3  0.73067  -0.716  0.208  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.789e-02 -4.517e-03 -1.034e-01 
 -4.517e-03  4.459e-02  2.641e-02 
 -1.034e-01  2.641e-02  3.601e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.017153  -0.0013385   -0.030634
Mean        	  -0.0013385    0.013212   0.0078263
Sigma       	   -0.030634   0.0078263      0.1067

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.088911    -0.71607
Mean        	   -0.088911           1     0.20845
Sigma       	    -0.71607     0.20845           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      11.2597
NDf                       =           38
Edm                       =  1.67541e-07
NCalls                    =          120
Constant                  =      70.4732   +/-   0.130969    
Mean                      =      4166.33   +/-   0.114942    
Sigma                     =       31.157   +/-   0.326643     	 (limited)


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
     1 Constant     8.26050e+01  2.47815e+01     no limits
     2 Mean         4.32470e+03  1.29741e+03     no limits
     3 Sigma        1.14639e+01  5.73193e+00    0.00000e+00  1.14639e+02
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
 FCN=18414.7 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.26050e+01   2.47815e+01   2.47815e+01  -2.87443e+02
   2  Mean         4.32470e+03   1.29741e+03   1.29741e+03   2.26128e+02
   3  Sigma        1.14639e+01   5.73193e+00   1.72186e-01  -2.01228e+05
NO ERROR MATRIX       
 FCN=6075.57 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9944.15    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.97601e+01   2.47815e+01   7.15509e+00   4.27967e+02
   2  Mean         4.32434e+03   1.29741e+03  -3.61447e-01   9.08906e+01
   3  Sigma        1.59092e+01   5.73193e+00   1.19961e-01  -2.58943e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6790e-01  9.0345e-01  1.8287e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=3.5084 FROM MIGRAD    STATUS=CONVERGED     126 CALLS         127 TOTAL
                     EDM=2.59339e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.12492e+01   2.40122e-01   1.74490e-04  -9.44531e-06
   2  Mean         4.32297e+03   2.01766e-01   2.06135e-03  -1.02526e-05
   3  Sigma        2.99935e+01   5.35211e-01   7.39099e-06  -2.34500e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.766e-02  6.555e-03 -9.088e-02 
  6.555e-03  4.071e-02 -3.415e-02 
 -9.088e-02 -3.415e-02  2.865e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71326   1.000  0.135 -0.707
        2  0.33996   0.135  1.000 -0.316
        3  0.74135  -0.707 -0.316  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.766e-02  6.555e-03 -9.088e-02 
  6.555e-03  4.071e-02 -3.415e-02 
 -9.088e-02 -3.415e-02  2.865e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0053234  0.00060521  -0.0083909
Mean        	  0.00060521   0.0037586  -0.0031525
Sigma       	  -0.0083909  -0.0031525    0.026448

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1      0.1353    -0.70716
Mean        	      0.1353           1    -0.31619
Sigma       	    -0.70716    -0.31619           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =       3.5084
NDf                       =           38
Edm                       =  2.59339e-10
NCalls                    =          127
Constant                  =      71.2492   +/-   0.0729616   
Mean                      =      4322.97   +/-   0.0613072   
Sigma                     =      29.9935   +/-   0.162625     	 (limited)


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
     1 Constant     8.19644e+01  2.45893e+01     no limits
     2 Mean         4.40975e+03  1.32293e+03     no limits
     3 Sigma        1.14507e+01  5.72537e+00    0.00000e+00  1.14507e+02
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
 FCN=17995.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.19644e+01   2.45893e+01   2.45893e+01  -2.86158e+02
   2  Mean         4.40975e+03   1.32293e+03   1.32293e+03   1.22102e+02
   3  Sigma        1.14507e+01   5.72537e+00   1.72186e-01  -1.97879e+05
NO ERROR MATRIX       
 FCN=5938.17 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9802.33    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.90949e+01   2.45893e+01   7.13044e+00   4.25383e+02
   2  Mean         4.40956e+03   1.32293e+03  -1.97516e-01   8.50365e+01
   3  Sigma        1.58791e+01   5.72537e+00   1.19662e-01  -2.50863e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7374e-01  9.3683e-01  1.7894e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=26.9788 FROM MIGRAD    STATUS=CONVERGED     117 CALLS         118 TOTAL
                     EDM=8.07424e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.07731e+01   2.40874e-01   4.35425e-04   2.07411e-03
   2  Mean         4.40842e+03   1.93447e-01   2.10210e-03  -7.47264e-04
   3  Sigma        2.94924e+01   5.13501e-01   1.80365e-05   3.99749e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.802e-02  5.262e-03 -8.790e-02 
  5.262e-03  3.742e-02 -2.543e-02 
 -8.790e-02 -2.543e-02  2.637e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71424   1.000  0.113 -0.711
        2  0.27416   0.113  1.000 -0.256
        3  0.73234  -0.711 -0.256  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.802e-02  5.262e-03 -8.790e-02 
  5.262e-03  3.742e-02 -2.543e-02 
 -8.790e-02 -2.543e-02  2.637e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.041193   0.0037361   -0.062408
Mean        	   0.0037361    0.026568   -0.018056
Sigma       	   -0.062408   -0.018056     0.18721

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.11294    -0.71066
Mean        	     0.11294           1    -0.25602
Sigma       	    -0.71066    -0.25602           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      26.9788
NDf                       =           38
Edm                       =  8.07424e-08
NCalls                    =          118
Constant                  =      70.7731   +/-   0.202959    
Mean                      =      4408.42   +/-   0.162998    
Sigma                     =      29.4924   +/-   0.432674     	 (limited)


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
     1 Constant     8.28389e+01  2.48517e+01     no limits
     2 Mean         4.56752e+03  1.37026e+03     no limits
     3 Sigma        1.01579e+01  5.07896e+00    0.00000e+00  1.01579e+02
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
 FCN=17945.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.28389e+01   2.48517e+01   2.48517e+01  -2.64933e+02
   2  Mean         4.56752e+03   1.37026e+03   1.37026e+03  -2.35180e+01
   3  Sigma        1.01579e+01   5.07896e+00   1.72186e-01  -1.85872e+05
NO ERROR MATRIX       
 FCN=6060.89 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9225.39    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     9.02868e+01   2.48517e+01   7.44786e+00   3.84752e+02
   2  Mean         4.56755e+03   1.37026e+03   3.40439e-02  -4.63613e+00
   3  Sigma        1.42446e+01   5.07896e+00   1.24159e-01  -2.59869e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7293e-01  9.9885e-01  1.7282e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=0.878988 FROM MIGRAD    STATUS=CONVERGED     128 CALLS         129 TOTAL
                     EDM=1.92702e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.07498e+01   2.56007e-01   1.17672e-04  -6.35263e-06
   2  Mean         4.56767e+03   2.41966e-01   2.17803e-03   6.25020e-05
   3  Sigma        3.10881e+01   8.01481e-01   7.86738e-06   6.32740e-04
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.554e-02 -8.591e-04 -1.491e-01 
 -8.591e-04  5.855e-02  6.143e-03 
 -1.491e-01  6.143e-03  6.424e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.72690   1.000 -0.014 -0.727
        2  0.03437  -0.014  1.000  0.032
        3  0.72717  -0.727  0.032  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.554e-02 -8.591e-04 -1.491e-01 
 -8.591e-04  5.855e-02  6.143e-03 
 -1.491e-01  6.143e-03  6.424e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0017457 -2.2883e-05  -0.0039726
Mean        	 -2.2883e-05   0.0015595  0.00016363
Sigma       	  -0.0039726  0.00016363    0.017112

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.013869    -0.72685
Mean        	   -0.013869           1    0.031675
Sigma       	    -0.72685    0.031675           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =     0.878988
NDf                       =           33
Edm                       =  1.92702e-10
NCalls                    =          129
Constant                  =      70.7498   +/-   0.0417818   
Mean                      =      4567.67   +/-   0.0394902   
Sigma                     =      31.0881   +/-   0.130806     	 (limited)


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
     1 Constant     8.15082e+01  2.44525e+01     no limits
     2 Mean         4.65492e+03  1.39648e+03     no limits
     3 Sigma        1.14701e+01  5.73507e+00    0.00000e+00  1.14701e+02
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
 FCN=18091.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.15082e+01   2.44525e+01   2.44525e+01  -2.87738e+02
   2  Mean         4.65492e+03   1.39648e+03   1.39648e+03  -1.93251e+00
   3  Sigma        1.14701e+01   5.73507e+00   1.72186e-01  -1.97383e+05
NO ERROR MATRIX       
 FCN=5983.41 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9790.88    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.86667e+01   2.44525e+01   7.15846e+00   4.25370e+02
   2  Mean         4.65493e+03   1.39648e+03   3.18022e-03   3.45824e+01
   3  Sigma        1.59373e+01   5.73507e+00   1.20451e-01  -2.53447e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7967e-01  9.9268e-01  1.7277e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=18.2049 FROM MIGRAD    STATUS=CONVERGED     128 CALLS         129 TOTAL
                     EDM=1.655e-13    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.02431e+01   2.41573e-01   3.59254e-04  -2.24738e-06
   2  Mean         4.65451e+03   1.96660e-01   2.21944e-03  -2.18501e-06
   3  Sigma        3.01873e+01   5.51002e-01   1.61751e-05  -2.77680e-05
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.836e-02  1.930e-03 -9.566e-02 
  1.930e-03  3.868e-02 -9.460e-03 
 -9.566e-02 -9.460e-03  3.036e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71902   1.000  0.041 -0.719
        2  0.09291   0.041  1.000 -0.087
        3  0.72103  -0.719 -0.087  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.836e-02  1.930e-03 -9.566e-02 
  1.930e-03  3.868e-02 -9.460e-03 
 -9.566e-02 -9.460e-03  3.036e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.027958  0.00092466    -0.04583
Mean        	  0.00092466    0.018528  -0.0045318
Sigma       	    -0.04583  -0.0045318     0.14546

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.040627    -0.71868
Mean        	    0.040627           1   -0.087295
Sigma       	    -0.71868   -0.087295           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      18.2049
NDf                       =           38
Edm                       =    1.655e-13
NCalls                    =          129
Constant                  =      70.2431   +/-   0.167206    
Mean                      =      4654.51   +/-   0.136119    
Sigma                     =      30.1873   +/-   0.381378     	 (limited)


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
     1 Constant     8.19565e+01  2.45870e+01     no limits
     2 Mean         4.81520e+03  1.44456e+03     no limits
     3 Sigma        1.14741e+01  5.73706e+00    0.00000e+00  1.14741e+02
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
 FCN=18353.2 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.19565e+01   2.45870e+01   2.45870e+01  -2.87382e+02
   2  Mean         4.81520e+03   1.44456e+03   1.44456e+03  -1.60442e+02
   3  Sigma        1.14741e+01   5.73706e+00   1.72186e-01  -1.99656e+05
NO ERROR MATRIX       
 FCN=6063.04 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9860.31    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.91040e+01   2.45870e+01   7.14750e+00   4.26233e+02
   2  Mean         4.81546e+03   1.44456e+03   2.61956e-01  -5.84215e+01
   3  Sigma        1.59443e+01   5.73706e+00   1.20487e-01  -2.59423e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7406e-01  9.4752e-01  1.7784e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=5.38523 FROM MIGRAD    STATUS=CONVERGED     124 CALLS         125 TOTAL
                     EDM=4.49113e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.06044e+01   2.40716e-01   2.07102e-04  -2.73822e-05
   2  Mean         4.81641e+03   2.02705e-01   2.29665e-03   4.01952e-05
   3  Sigma        3.03957e+01   5.59113e-01   9.29945e-06  -3.18739e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.794e-02 -4.794e-03 -9.607e-02 
 -4.794e-03  4.109e-02  2.565e-02 
 -9.607e-02  2.565e-02  3.126e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71678   1.000 -0.098 -0.714
        2  0.24365  -0.098  1.000  0.226
        3  0.73087  -0.714  0.226  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.794e-02 -4.794e-03 -9.607e-02 
 -4.794e-03  4.109e-02  2.565e-02 
 -9.607e-02  2.565e-02  3.126e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0082116 -0.00067941   -0.013615
Mean        	 -0.00067941   0.0058231   0.0036345
Sigma       	   -0.013615   0.0036345    0.044303

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.098252    -0.71383
Mean        	   -0.098252           1     0.22628
Sigma       	    -0.71383     0.22628           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      5.38523
NDf                       =           38
Edm                       =  4.49113e-10
NCalls                    =          125
Constant                  =      70.6044   +/-   0.0906181   
Mean                      =      4816.41   +/-   0.0763089   
Sigma                     =      30.3957   +/-   0.21048      	 (limited)


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
     1 Constant     8.11838e+01  2.43551e+01     no limits
     2 Mean         4.90493e+03  1.47148e+03     no limits
     3 Sigma        1.14684e+01  5.73421e+00    0.00000e+00  1.14684e+02
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
 FCN=17875.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.11838e+01   2.43551e+01   2.43551e+01  -2.84613e+02
   2  Mean         4.90493e+03   1.47148e+03   1.47148e+03  -3.06588e+00
   3  Sigma        1.14684e+01   5.73421e+00   1.72186e-01  -1.95313e+05
NO ERROR MATRIX       
 FCN=5915.5 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9683.13    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.82655e+01   2.43551e+01   7.08167e+00   4.22974e+02
   2  Mean         4.90493e+03   1.47148e+03   5.08477e-03   3.17067e+01
   3  Sigma        1.59274e+01   5.73421e+00   1.20262e-01  -2.51143e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7989e-01  9.9394e-01  1.7262e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=15.3891 FROM MIGRAD    STATUS=CONVERGED     118 CALLS         119 TOTAL
                     EDM=1.39962e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.99374e+01   2.41656e-01   3.31979e-04  -1.13573e-04
   2  Mean         4.90456e+03   1.96485e-01   2.33867e-03  -6.83290e-04
   3  Sigma        3.01079e+01   5.49488e-01   1.49347e-05   6.32978e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.840e-02  1.759e-03 -9.544e-02 
  1.759e-03  3.861e-02 -8.582e-03 
 -9.544e-02 -8.582e-03  3.019e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71902   1.000  0.037 -0.719
        2  0.08457   0.037  1.000 -0.079
        3  0.72068  -0.719 -0.079  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.840e-02  1.759e-03 -9.544e-02 
  1.759e-03  3.861e-02 -8.582e-03 
 -9.544e-02 -8.582e-03  3.019e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.02365  0.00071243   -0.038651
Mean        	  0.00071243    0.015635  -0.0034755
Sigma       	   -0.038651  -0.0034755     0.12228

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.03705    -0.71874
Mean        	     0.03705           1   -0.079486
Sigma       	    -0.71874   -0.079486           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      15.3891
NDf                       =           38
Edm                       =  1.39962e-08
NCalls                    =          119
Constant                  =      69.9374   +/-   0.153784    
Mean                      =      4904.56   +/-   0.125038    
Sigma                     =      30.1079   +/-   0.349682     	 (limited)


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
     1 Constant     8.08953e+01  2.42686e+01     no limits
     2 Mean         5.06989e+03  1.52097e+03     no limits
     3 Sigma        1.14689e+01  5.73444e+00    0.00000e+00  1.14689e+02
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
 FCN=17719.9 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.08953e+01   2.42686e+01   2.42686e+01  -2.82281e+02
   2  Mean         5.06989e+03   1.52097e+03   1.52097e+03   7.23073e+01
   3  Sigma        1.14689e+01   5.73444e+00   1.72186e-01  -1.93663e+05
NO ERROR MATRIX       
 FCN=5860.33 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9593.35    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.79188e+01   2.42686e+01   7.02343e+00   4.20873e+02
   2  Mean         5.06976e+03   1.52097e+03  -1.20827e-01   3.58778e+01
   3  Sigma        1.59252e+01   5.73444e+00   1.20190e-01  -2.49798e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7863e-01  9.8284e-01  1.7385e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=4.05707 FROM MIGRAD    STATUS=CONVERGED     118 CALLS         119 TOTAL
                     EDM=4.2727e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.96698e+01   2.41502e-01   1.84427e-04   9.35825e-04
   2  Mean         5.06922e+03   1.98510e-01   2.41719e-03  -6.30797e-04
   3  Sigma        3.01275e+01   5.52779e-01   8.30949e-06   3.23430e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.832e-02  2.713e-03 -9.581e-02 
  2.713e-03  3.941e-02 -1.402e-02 
 -9.581e-02 -1.402e-02  3.056e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71854   1.000  0.057 -0.718
        2  0.13735   0.057  1.000 -0.128
        3  0.72296  -0.718 -0.128  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.832e-02  2.713e-03 -9.581e-02 
  2.713e-03  3.941e-02 -1.402e-02 
 -9.581e-02 -1.402e-02  3.056e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0062269  0.00028964   -0.010229
Mean        	  0.00028964   0.0042072  -0.0014968
Sigma       	   -0.010229  -0.0014968    0.032625

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    0.056588    -0.71767
Mean        	    0.056588           1    -0.12776
Sigma       	    -0.71767    -0.12776           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      4.05707
NDf                       =           38
Edm                       =   4.2727e-08
NCalls                    =          119
Constant                  =      69.6698   +/-   0.0789105   
Mean                      =      5069.22   +/-   0.0648628   
Sigma                     =      30.1275   +/-   0.18062      	 (limited)


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
     1 Constant     7.94654e+01  2.38396e+01     no limits
     2 Mean         5.15769e+03  1.54731e+03     no limits
     3 Sigma        1.27510e+01  6.37549e+00    0.00000e+00  1.27510e+02
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
 FCN=17302.3 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.94654e+01   2.38396e+01   2.38396e+01  -2.93454e+02
   2  Mean         5.15769e+03   1.54731e+03   1.54731e+03  -2.02141e+02
   3  Sigma        1.27510e+01   6.37549e+00   1.72186e-01  -1.99804e+05
NO ERROR MATRIX       
 FCN=5623.36 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9820.65    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.60280e+01   2.38396e+01   6.56254e+00   4.52847e+02
   2  Mean         5.15807e+03   1.54731e+03   3.79492e-01  -2.86849e+01
   3  Sigma        1.75126e+01   6.37549e+00   1.15806e-01  -2.35986e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.8554e-01  9.7713e-01  1.7373e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=30.4255 FROM MIGRAD    STATUS=CONVERGED     109 CALLS         110 TOTAL
                     EDM=2.38999e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.89443e+01   2.29906e-01   4.42566e-04   6.93375e-05
   2  Mean         5.15861e+03   1.71455e-01   2.45982e-03   3.56958e-03
   3  Sigma        2.97626e+01   4.18349e-01   1.48432e-05  -5.24872e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.286e-02 -2.322e-03 -6.825e-02 
 -2.322e-03  2.940e-02  1.017e-02 
 -6.825e-02  1.017e-02  1.750e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71083   1.000 -0.059 -0.710
        2  0.15357  -0.059  1.000  0.142
        3  0.71661  -0.710  0.142  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.286e-02 -2.322e-03 -6.825e-02 
 -2.322e-03  2.940e-02  1.017e-02 
 -6.825e-02  1.017e-02  1.750e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	      0.0374  -0.0016427   -0.048291
Mean        	  -0.0016427      0.0208    0.007193
Sigma       	   -0.048291    0.007193     0.12384

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.058896    -0.70959
Mean        	   -0.058896           1     0.14172
Sigma       	    -0.70959     0.14172           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      30.4255
NDf                       =           43
Edm                       =  2.38999e-07
NCalls                    =          110
Constant                  =      68.9443   +/-   0.19339     
Mean                      =      5158.61   +/-   0.144223    
Sigma                     =      29.7626   +/-   0.351903     	 (limited)


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
     1 Constant     7.89963e+01  2.36989e+01     no limits
     2 Mean         5.32520e+03  1.59756e+03     no limits
     3 Sigma        1.14532e+01  5.72661e+00    0.00000e+00  1.14532e+02
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
 FCN=16691.1 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.89963e+01   2.36989e+01   2.36989e+01  -2.74896e+02
   2  Mean         5.32520e+03   1.59756e+03   1.59756e+03  -1.41460e+02
   3  Sigma        1.14532e+01   5.72661e+00   1.72186e-01  -1.83726e+05
NO ERROR MATRIX       
 FCN=5492.79 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=9083.55    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.58446e+01   2.36989e+01   6.84836e+00   4.09672e+02
   2  Mean         5.32544e+03   1.59756e+03   2.46620e-01  -5.23916e+01
   3  Sigma        1.58820e+01   5.72661e+00   1.19649e-01  -2.33766e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7653e-01  9.5641e-01  1.7671e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=4.46343 FROM MIGRAD    STATUS=CONVERGED     117 CALLS         118 TOTAL
                     EDM=7.56132e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.81660e+01   2.41338e-01   1.92315e-04   2.11855e-03
   2  Mean         5.32629e+03   1.98706e-01   2.53977e-03   4.82144e-04
   3  Sigma        2.95266e+01   5.34750e-01   8.35762e-06   4.09675e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.824e-02 -4.301e-03 -9.208e-02 
 -4.301e-03  3.948e-02  2.187e-02 
 -9.208e-02  2.187e-02  2.860e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.71589   1.000 -0.090 -0.714
        2  0.22146  -0.090  1.000  0.206
        3  0.72758  -0.714  0.206  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.824e-02 -4.301e-03 -9.208e-02 
 -4.301e-03  3.948e-02  2.187e-02 
 -9.208e-02  2.187e-02  2.860e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	   0.0068413 -0.00050516   -0.010816
Mean        	 -0.00050516   0.0046377   0.0025694
Sigma       	   -0.010816   0.0025694     0.03359

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1   -0.089683     -0.7135
Mean        	   -0.089683           1     0.20586
Sigma       	     -0.7135     0.20586           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      4.46343
NDf                       =           38
Edm                       =  7.56132e-08
NCalls                    =          118
Constant                  =       68.166   +/-   0.0827121   
Mean                      =      5326.29   +/-   0.0681009   
Sigma                     =      29.5266   +/-   0.183271     	 (limited)


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
     1 Constant     7.72085e+01  2.31626e+01     no limits
     2 Mean         5.41540e+03  1.62462e+03     no limits
     3 Sigma        1.14568e+01  5.72842e+00    0.00000e+00  1.14568e+02
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
 FCN=15988.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.72085e+01   2.31626e+01   2.31626e+01  -2.64681e+02
   2  Mean         5.41540e+03   1.62462e+03   1.62462e+03  -3.28202e+02
   3  Sigma        1.14568e+01   5.72842e+00   1.72186e-01  -1.74826e+05
NO ERROR MATRIX       
 FCN=5250.82 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=8547.81    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.38010e+01   2.31626e+01   6.59250e+00   3.96138e+02
   2  Mean         5.41600e+03   1.62462e+03   6.00262e-01  -9.27639e+01
   3  Sigma        1.58793e+01   5.72842e+00   1.19454e-01  -2.26192e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.5922e-01  8.5038e-01  1.8904e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=9.31155 FROM MIGRAD    STATUS=CONVERGED     117 CALLS         118 TOTAL
                     EDM=9.37746e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.66633e+01   2.39098e-01   2.64570e-04   1.43075e-04
   2  Mean         5.41772e+03   2.20301e-01   2.58337e-03   2.04264e-03
   3  Sigma        2.97304e+01   5.59486e-01   1.14537e-05  -2.44074e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.717e-02 -8.657e-03 -9.328e-02 
 -8.657e-03  4.853e-02  4.934e-02 
 -9.328e-02  4.934e-02  3.130e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.70849   1.000 -0.164 -0.697
        2  0.43117  -0.164  1.000  0.400
        3  0.75509  -0.697  0.400  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.717e-02 -8.657e-03 -9.328e-02 
 -8.657e-03  4.853e-02  4.934e-02 
 -9.328e-02  4.934e-02  3.130e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.014008  -0.0021214   -0.022858
Mean        	  -0.0021214    0.011892    0.012091
Sigma       	   -0.022858    0.012091    0.076707

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.16436    -0.69732
Mean        	    -0.16436           1     0.40032
Sigma       	    -0.69732     0.40032           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      9.31155
NDf                       =           38
Edm                       =  9.37746e-08
NCalls                    =          118
Constant                  =      66.6633   +/-   0.118357    
Mean                      =      5417.72   +/-   0.109052    
Sigma                     =      29.7304   +/-   0.276955     	 (limited)

```
---
