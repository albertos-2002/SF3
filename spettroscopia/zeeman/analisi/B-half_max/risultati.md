# Risultati analisi

## range e zone del fit (risultati riportati alla fine)

```

A:   - 
B:   - 
C:   - 
D:   - 
E:   - 
F:   - 
G:   - 
H:   - 
I:   - 
J:   - 
K:   - 
L:   - 
M:   - 
N:   - 
O:   - 
P:   - 
Q:   - 
R:   - 

```


## risultati analisi

```

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
     1 Constant     7.79204e+01  2.33761e+01     no limits
     2 Mean         3.61605e+03  1.08482e+03     no limits
     3 Sigma        1.18283e+01  5.91417e+00    0.00000e+00  1.18283e+02
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
 FCN=18521.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.79204e+01   2.33761e+01   2.33761e+01  -2.93436e+02
   2  Mean         3.61605e+03   1.08482e+03   1.08482e+03  -3.17818e+02
   3  Sigma        1.18283e+01   5.91417e+00   1.72186e-01  -1.91257e+05
NO ERROR MATRIX       
 FCN=6209.56 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9424.93    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.50049e+01   2.33761e+01   7.08448e+00   4.17700e+02
   2  Mean         3.61665e+03   1.08482e+03   6.02167e-01  -1.61460e+02
   3  Sigma        1.65690e+01   5.91417e+00   1.23721e-01  -2.63968e+04
 FCN=38.7649 FROM MIGRAD    STATUS=PROGRESS      119 CALLS         120 TOTAL
                     EDM=5.75947e-09    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   7.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.71913e+01   2.28273e-01  -1.84362e-06   4.40281e-04
   2  Mean         3.62038e+03   3.48396e-01  -2.27201e-04  -2.14561e-04
   3  Sigma        3.54493e+01   8.90149e-01   5.84328e-06   1.36382e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.0528e-01  6.8419e-01  2.1105e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=38.7649 FROM MIGRAD    STATUS=CONVERGED     135 CALLS         136 TOTAL
                     EDM=8.74934e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.71913e+01   2.27444e-01   5.06128e-04   4.40281e-04
   2  Mean         3.62038e+03   3.44408e-01   1.72633e-03  -2.15140e-04
   3  Sigma        3.54493e+01   8.61838e-01   2.81007e-05   1.36712e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.173e-02 -1.757e-02 -1.270e-01 
 -1.757e-02  1.186e-01  1.880e-01 
 -1.270e-01  1.880e-01  7.428e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.69115   1.000 -0.224 -0.648
        2  0.67898  -0.224  1.000  0.633
        3  0.81897  -0.648  0.633  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.173e-02 -1.757e-02 -1.270e-01 
 -1.757e-02  1.186e-01  1.880e-01 
 -1.270e-01  1.880e-01  7.428e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.051419   -0.017459    -0.12624
Mean        	   -0.017459      0.1179      0.1869
Sigma       	    -0.12624      0.1869     0.73835

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.22424    -0.64791
Mean        	    -0.22424           1     0.63345
Sigma       	    -0.64791     0.63345           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      38.7649
NDf                       =           39
Edm                       =  8.74934e-09
NCalls                    =          136
Constant                  =      67.1913   +/-   0.226757    
Mean                      =      3620.38   +/-   0.343368    
Sigma                     =      35.4493   +/-   0.859237     	 (limited)

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
     1 Constant     7.68614e+01  2.30584e+01     no limits
     2 Mean         3.65271e+03  1.09581e+03     no limits
     3 Sigma        9.93936e+00  4.96968e+00    0.00000e+00  9.93936e+01
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
 FCN=16372.9 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.68614e+01   2.30584e+01   2.30584e+01  -2.51799e+02
   2  Mean         3.65271e+03   1.09581e+03   1.09581e+03   1.93728e+02
   3  Sigma        9.93936e+00   4.96968e+00   1.72186e-01  -1.61651e+05
NO ERROR MATRIX       
 FCN=5604.46 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=7996.21    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.41004e+01   2.30584e+01   7.23895e+00   3.50439e+02
   2  Mean         3.65238e+03   1.09581e+03  -3.25204e-01   1.06103e+02
   3  Sigma        1.40565e+01   4.96968e+00   1.27584e-01  -2.38414e+04
 FCN=19.3321 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=0.000553988    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  15.7 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.56305e+01   2.49442e-01  -1.28047e-02   1.88187e-01
   2  Mean         3.64914e+03   4.61012e-01   9.43263e-02   7.32558e-02
   3  Sigma        3.62238e+01   1.51323e+00  -1.83027e-03   2.09840e+00
 MIGRAD MINIMIZATION HAS CONVERGED.
 FCN=19.3318 FROM MIGRAD    STATUS=CONVERGED     137 CALLS         138 TOTAL
                     EDM=2.07307e-09    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   3.9 per cent
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.56289e+01   2.47975e-01  -2.56740e-04  -3.34203e-04
   2  Mean         3.64914e+03   4.65688e-01  -3.26194e-04  -2.22126e-04
   3  Sigma        3.62159e+01   1.43480e+00   4.19064e-05  -3.80371e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  6.149e-02  2.585e-02 -2.341e-01 
  2.585e-02  2.169e-01 -4.179e-01 
 -2.341e-01 -4.179e-01  2.059e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.70025   1.000  0.224 -0.658
        2  0.67309   0.224  1.000 -0.625
        3  0.82055  -0.658 -0.625  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  6.149e-02  2.585e-02 -2.341e-01 
  2.585e-02  2.169e-01 -4.179e-01 
 -2.341e-01 -4.179e-01  2.059e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.037148    0.015619     -0.1414
Mean        	    0.015619     0.13101    -0.25248
Sigma       	     -0.1414    -0.25248       1.244

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.22389    -0.65775
Mean        	     0.22389           1    -0.62539
Sigma       	    -0.65775    -0.62539           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      19.3318
NDf                       =           32
Edm                       =  2.07307e-09
NCalls                    =          138
Constant                  =      65.6289   +/-   0.192739    
Mean                      =      3649.14   +/-   0.361956    
Sigma                     =      36.2159   +/-   1.1152       	 (limited)

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
     1 Constant     7.87467e+01  2.36240e+01     no limits
     2 Mean         3.84970e+03  1.15491e+03     no limits
     3 Sigma        1.20772e+01  6.03858e+00    0.00000e+00  1.20772e+02
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
 FCN=18821.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.87467e+01   2.36240e+01   2.36240e+01  -2.94057e+02
   2  Mean         3.84970e+03   1.15491e+03   1.15491e+03  -4.15948e+02
   3  Sigma        1.20772e+01   6.03858e+00   1.72186e-01  -1.96552e+05
NO ERROR MATRIX       
 FCN=6270.12 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9601    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.56989e+01   2.36240e+01   6.95224e+00   4.25417e+02
   2  Mean         3.85048e+03   1.15491e+03   7.83710e-01  -1.94678e+02
   3  Sigma        1.68536e+01   6.03858e+00   1.22192e-01  -2.69129e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.9285e-01  6.5513e-01  2.1520e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=40.8853 FROM MIGRAD    STATUS=CONVERGED     127 CALLS         128 TOTAL
                     EDM=5.51543e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.81197e+01   2.23370e-01   5.17429e-04  -7.09363e-04
   2  Mean         3.85463e+03   3.32121e-01   1.83803e-03   1.14907e-03
   3  Sigma        3.46370e+01   7.57111e-01   2.43460e-05  -4.00102e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.989e-02 -1.636e-02 -1.056e-01 
 -1.636e-02  1.103e-01  1.693e-01 
 -1.056e-01  1.693e-01  5.733e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68019   1.000 -0.220 -0.624
        2  0.72015  -0.220  1.000  0.673
        3  0.83137  -0.624  0.673  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.989e-02 -1.636e-02 -1.056e-01 
 -1.636e-02  1.103e-01  1.693e-01 
 -1.056e-01  1.693e-01  5.733e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.050998   -0.016719    -0.10791
Mean        	   -0.016719     0.11275     0.17304
Sigma       	    -0.10791     0.17304     0.58594

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.22049    -0.62424
Mean        	    -0.22049           1     0.67322
Sigma       	    -0.62424     0.67322           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      40.8853
NDf                       =           40
Edm                       =  5.51543e-08
NCalls                    =          128
Constant                  =      68.1197   +/-   0.225828    
Mean                      =      3854.63   +/-   0.335776    
Sigma                     =       34.637   +/-   0.765444     	 (limited)

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
     1 Constant     7.77830e+01  2.33349e+01     no limits
     2 Mean         3.88905e+03  1.16671e+03     no limits
     3 Sigma        1.01718e+01  5.08590e+00    0.00000e+00  1.01718e+02
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
 FCN=16458 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.77830e+01   2.33349e+01   2.33349e+01  -2.55231e+02
   2  Mean         3.88905e+03   1.16671e+03   1.16671e+03   3.03656e+02
   3  Sigma        1.01718e+01   5.08590e+00   1.72186e-01  -1.66511e+05
NO ERROR MATRIX       
 FCN=5558.64 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=8183.11    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.49504e+01   2.33349e+01   7.16741e+00   3.59362e+02
   2  Mean         3.88854e+03   1.16671e+03  -5.02916e-01   1.55913e+02
   3  Sigma        1.43044e+01   5.08590e+00   1.25301e-01  -2.37579e+04
 FCN=34.167 FROM MIGRAD    STATUS=PROGRESS      123 CALLS         124 TOTAL
                     EDM=3.64033e-09    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   8.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.69124e+01   2.50210e-01   5.50904e-04  -3.42762e-04
   2  Mean         3.88488e+03   3.95024e-01  -4.24118e-04  -5.59428e-06
   3  Sigma        3.27752e+01   1.03492e+00  -2.91731e-05  -6.49721e-03
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.8893e-01  6.4699e-01  2.1641e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=34.167 FROM MIGRAD    STATUS=CONVERGED     141 CALLS         142 TOTAL
                     EDM=5.38536e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.69124e+01   2.42451e-01   5.10577e-04  -3.42762e-04
   2  Mean         3.88488e+03   3.85675e-01   1.85245e-03  -4.49943e-06
   3  Sigma        3.27752e+01   9.91831e-01   3.32318e-05  -6.46886e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.878e-02  2.075e-02 -1.512e-01 
  2.075e-02  1.487e-01 -2.585e-01 
 -1.512e-01 -2.585e-01  9.839e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68634   1.000  0.222 -0.629
        2  0.72423   0.222  1.000 -0.676
        3  0.83523  -0.629 -0.676  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.878e-02  2.075e-02 -1.512e-01 
  2.075e-02  1.487e-01 -2.585e-01 
 -1.512e-01 -2.585e-01  9.839e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.060861    0.021486    -0.15656
Mean        	    0.021486     0.15401     -0.2676
Sigma       	    -0.15656     -0.2676      1.0187

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.22193    -0.62877
Mean        	     0.22193           1    -0.67561
Sigma       	    -0.62877    -0.67561           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =       34.167
NDf                       =           33
Edm                       =  5.38536e-09
NCalls                    =          142
Constant                  =      66.9124   +/-   0.2467      
Mean                      =      3884.88   +/-   0.392435    
Sigma                     =      32.7752   +/-   1.00922      	 (limited)

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
     1 Constant     7.96060e+01  2.38818e+01     no limits
     2 Mean         4.08725e+03  1.22617e+03     no limits
     3 Sigma        1.23465e+01  6.17324e+00    0.00000e+00  1.23465e+02
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
 FCN=19537 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.96060e+01   2.38818e+01   2.38818e+01  -3.02905e+02
   2  Mean         4.08725e+03   1.22617e+03   1.22617e+03  -4.44185e+02
   3  Sigma        1.23465e+01   6.17324e+00   1.72186e-01  -2.04748e+05
NO ERROR MATRIX       
 FCN=6491.61 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9983.55    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.66109e+01   2.38818e+01   7.00488e+00   4.38569e+02
   2  Mean         4.08808e+03   1.22617e+03   8.35512e-01  -2.08446e+02
   3  Sigma        1.72128e+01   6.17324e+00   1.21804e-01  -2.78673e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.9095e-01  6.5113e-01  2.1579e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=47.0665 FROM MIGRAD    STATUS=CONVERGED     127 CALLS         128 TOTAL
                     EDM=1.26362e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.89589e+01   2.20619e-01   5.49289e-04  -5.43924e-04
   2  Mean         4.09238e+03   3.26029e-01   1.95140e-03   3.40589e-04
   3  Sigma        3.49161e+01   7.26015e-01   2.44469e-05  -2.08911e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.867e-02 -1.575e-02 -9.918e-02 
 -1.575e-02  1.063e-01  1.608e-01 
 -9.918e-02  1.608e-01  5.271e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.67755   1.000 -0.219 -0.619
        2  0.72648  -0.219  1.000  0.680
        3  0.83317  -0.619  0.680  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.867e-02 -1.575e-02 -9.918e-02 
 -1.575e-02  1.063e-01  1.608e-01 
 -9.918e-02  1.608e-01  5.271e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.055875    -0.01808    -0.11386
Mean        	    -0.01808     0.12202     0.18464
Sigma       	    -0.11386     0.18464     0.60512

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.21896    -0.61922
Mean        	    -0.21896           1      0.6795
Sigma       	    -0.61922      0.6795           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      47.0665
NDf                       =           41
Edm                       =  1.26362e-08
NCalls                    =          128
Constant                  =      68.9589   +/-   0.236378    
Mean                      =      4092.38   +/-   0.349318    
Sigma                     =      34.9161   +/-   0.777875     	 (limited)

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
     1 Constant     7.89841e+01  2.36952e+01     no limits
     2 Mean         4.12654e+03  1.23796e+03     no limits
     3 Sigma        1.10141e+01  5.50703e+00    0.00000e+00  1.10141e+02
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
 FCN=18220.6 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.89841e+01   2.36952e+01   2.36952e+01  -2.78319e+02
   2  Mean         4.12654e+03   1.23796e+03   1.23796e+03   2.79442e+02
   3  Sigma        1.10141e+01   5.50703e+00   1.72186e-01  -1.85127e+05
NO ERROR MATRIX       
 FCN=6167.76 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9120.7    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.62018e+01   2.36952e+01   7.21775e+00   3.95246e+02
   2  Mean         4.12605e+03   1.23796e+03  -4.85239e-01   1.55318e+02
   3  Sigma        1.54757e+01   5.50703e+00   1.24957e-01  -2.63084e+04
 FCN=46.6816 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=1.09805e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   8.3 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.78746e+01   2.42106e-01   2.58074e-03  -2.61244e-03
   2  Mean         4.12239e+03   3.74429e-01  -1.17107e-04  -4.58884e-04
   3  Sigma        3.50031e+01   1.01318e+00  -1.45763e-04  -4.61224e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.0021e-01  6.7273e-01  2.1271e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=46.6816 FROM MIGRAD    STATUS=CONVERGED     138 CALLS         139 TOTAL
                     EDM=1.67448e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.78746e+01   2.34671e-01   5.71337e-04  -2.61244e-03
   2  Mean         4.12239e+03   3.71393e-01   1.96571e-03  -4.58100e-04
   3  Sigma        3.50031e+01   9.76039e-01   3.63729e-05  -4.60836e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.507e-02  1.959e-02 -1.477e-01 
  1.959e-02  1.379e-01 -2.337e-01 
 -1.477e-01 -2.337e-01  9.528e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.69179   1.000  0.225 -0.645
        2  0.69161   0.225  1.000 -0.645
        3  0.82411  -0.645 -0.645  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.507e-02  1.959e-02 -1.477e-01 
  1.959e-02  1.379e-01 -2.337e-01 
 -1.477e-01 -2.337e-01  9.528e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.071411    0.025398    -0.19158
Mean        	    0.025398     0.17886     -0.3031
Sigma       	    -0.19158     -0.3031      1.2355

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.22473      -0.645
Mean        	     0.22473           1    -0.64479
Sigma       	      -0.645    -0.64479           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      46.6816
NDf                       =           36
Edm                       =  1.67448e-07
NCalls                    =          139
Constant                  =      67.8746   +/-   0.267228    
Mean                      =      4122.39   +/-   0.422918    
Sigma                     =      35.0031   +/-   1.11145      	 (limited)

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
     1 Constant     8.08163e+01  2.42449e+01     no limits
     2 Mean         4.32873e+03  1.29862e+03     no limits
     3 Sigma        1.26320e+01  6.31598e+00    0.00000e+00  1.26320e+02
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
 FCN=20634.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.08163e+01   2.42449e+01   2.42449e+01  -3.16293e+02
   2  Mean         4.32873e+03   1.29862e+03   1.29862e+03  -4.33111e+02
   3  Sigma        1.26320e+01   6.31598e+00   1.72186e-01  -2.16202e+05
NO ERROR MATRIX       
 FCN=6865.14 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=10575.7    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.79655e+01   2.42449e+01   7.14923e+00   4.57095e+02
   2  Mean         4.32954e+03   1.29862e+03   8.08613e-01  -2.05340e+02
   3  Sigma        1.76197e+01   6.31598e+00   1.22009e-01  -2.93624e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.9648e-01  6.6283e-01  2.1407e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=48.2094 FROM MIGRAD    STATUS=CONVERGED     127 CALLS         128 TOTAL
                     EDM=2.15487e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.99497e+01   2.18919e-01   5.48769e-04  -7.55965e-04
   2  Mean         4.33376e+03   3.21063e-01   2.06650e-03   7.45634e-04
   3  Sigma        3.58628e+01   7.31843e-01   2.46914e-05  -2.82866e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.793e-02 -1.557e-02 -1.008e-01 
 -1.557e-02  1.031e-01  1.561e-01 
 -1.008e-01  1.561e-01  5.356e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68148   1.000 -0.222 -0.629
        2  0.71065  -0.222  1.000  0.664
        3  0.82785  -0.629  0.664  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.793e-02 -1.557e-02 -1.008e-01 
 -1.557e-02  1.031e-01  1.561e-01 
 -1.008e-01  1.561e-01  5.356e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.055011   -0.017874    -0.11566
Mean        	   -0.017874     0.11832     0.17918
Sigma       	    -0.11566     0.17918     0.61481

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.22155    -0.62888
Mean        	    -0.22155           1     0.66432
Sigma       	    -0.62888     0.66432           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      48.2094
NDf                       =           42
Edm                       =  2.15487e-08
NCalls                    =          128
Constant                  =      69.9497   +/-   0.234544    
Mean                      =      4333.76   +/-   0.343979    
Sigma                     =      35.8628   +/-   0.784078     	 (limited)

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
     1 Constant     7.97705e+01  2.39312e+01     no limits
     2 Mean         4.36854e+03  1.31056e+03     no limits
     3 Sigma        1.10231e+01  5.51154e+00    0.00000e+00  1.10231e+02
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
 FCN=18803.8 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.97705e+01   2.39312e+01   2.39312e+01  -2.85816e+02
   2  Mean         4.36854e+03   1.31056e+03   1.31056e+03   2.84614e+02
   3  Sigma        1.10231e+01   5.51154e+00   1.72186e-01  -1.90121e+05
NO ERROR MATRIX       
 FCN=6359.7 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9378.28    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.71771e+01   2.39312e+01   7.40658e+00   4.00928e+02
   2  Mean         4.36806e+03   1.31056e+03  -4.85479e-01   1.55503e+02
   3  Sigma        1.55106e+01   5.51154e+00   1.25538e-01  -2.70295e+04
 FCN=43.4274 FROM MIGRAD    STATUS=PROGRESS      123 CALLS         124 TOTAL
                     EDM=2.92623e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   7.9 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.85765e+01   2.42167e-01   7.05378e-04  -1.05851e-03
   2  Mean         4.36431e+03   3.90166e-01  -7.71233e-04  -2.65954e-04
   3  Sigma        3.56681e+01   1.06066e+00  -2.34155e-05  -2.32936e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.9725e-01  6.6594e-01  2.1368e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=43.4274 FROM MIGRAD    STATUS=CONVERGED     139 CALLS         140 TOTAL
                     EDM=4.35452e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.85765e+01   2.34149e-01   5.50552e-04  -1.05851e-03
   2  Mean         4.36431e+03   3.83532e-01   2.08107e-03  -2.65084e-04
   3  Sigma        3.56681e+01   1.01916e+00   3.61618e-05  -2.32577e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.483e-02  2.017e-02 -1.533e-01 
  2.017e-02  1.471e-01 -2.549e-01 
 -1.533e-01 -2.549e-01  1.039e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.69141   1.000  0.225 -0.642
        2  0.69955   0.225  1.000 -0.652
        3  0.82707  -0.642 -0.652  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.483e-02  2.017e-02 -1.533e-01 
  2.017e-02  1.471e-01 -2.549e-01 
 -1.533e-01 -2.549e-01  1.039e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.066137    0.024336    -0.18489
Mean        	    0.024336     0.17745    -0.30749
Sigma       	    -0.18489    -0.30749      1.2531

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.22464    -0.64224
Mean        	     0.22464           1    -0.65208
Sigma       	    -0.64224    -0.65208           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      43.4274
NDf                       =           36
Edm                       =  4.35452e-08
NCalls                    =          140
Constant                  =      68.5765   +/-   0.257172    
Mean                      =      4364.31   +/-   0.421243    
Sigma                     =      35.6681   +/-   1.11937      	 (limited)

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
     1 Constant     8.12734e+01  2.43820e+01     no limits
     2 Mean         4.57377e+03  1.37213e+03     no limits
     3 Sigma        1.26234e+01  6.31170e+00    0.00000e+00  1.26234e+02
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
 FCN=20726.3 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.12734e+01   2.43820e+01   2.43820e+01  -3.15694e+02
   2  Mean         4.57377e+03   1.37213e+03   1.37213e+03  -4.69956e+02
   3  Sigma        1.26234e+01   6.31170e+00   1.72186e-01  -2.17688e+05
NO ERROR MATRIX       
 FCN=6878.91 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=10616.7    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.84137e+01   2.43820e+01   7.14034e+00   4.57549e+02
   2  Mean         4.57463e+03   1.37213e+03   8.65774e-01  -2.16895e+02
   3  Sigma        1.75910e+01   6.31170e+00   1.21624e-01  -2.95121e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.9224e-01  6.5380e-01  2.1540e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=45.5484 FROM MIGRAD    STATUS=CONVERGED     126 CALLS         127 TOTAL
                     EDM=1.05364e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.04177e+01   2.18447e-01   5.34870e-04  -4.41520e-04
   2  Mean         4.57897e+03   3.18164e-01   2.18342e-03   1.75190e-04
   3  Sigma        3.54923e+01   7.07167e-01   2.30345e-05  -1.79284e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.772e-02 -1.526e-02 -9.593e-02 
 -1.526e-02  1.012e-01  1.522e-01 
 -9.593e-02  1.522e-01  5.001e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.67808   1.000 -0.220 -0.621
        2  0.72318  -0.220  1.000  0.676
        3  0.83194  -0.621  0.676  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.772e-02 -1.526e-02 -9.593e-02 
 -1.526e-02  1.012e-01  1.522e-01 
 -9.593e-02  1.522e-01  5.001e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	     0.05175   -0.016545    -0.10404
Mean        	   -0.016545     0.10978     0.16505
Sigma       	    -0.10404     0.16505     0.54236

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     -0.2195    -0.62101
Mean        	     -0.2195           1     0.67641
Sigma       	    -0.62101     0.67641           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      45.5484
NDf                       =           42
Edm                       =  1.05364e-08
NCalls                    =          127
Constant                  =      70.4177   +/-   0.227487    
Mean                      =      4578.97   +/-   0.331332    
Sigma                     =      35.4923   +/-   0.736434     	 (limited)

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
     1 Constant     7.98709e+01  2.39613e+01     no limits
     2 Mean         4.61502e+03  1.38451e+03     no limits
     3 Sigma        1.07404e+01  5.37021e+00    0.00000e+00  1.07404e+02
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
 FCN=18392.4 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.98709e+01   2.39613e+01   2.39613e+01  -2.79617e+02
   2  Mean         4.61502e+03   1.38451e+03   1.38451e+03   3.23471e+02
   3  Sigma        1.07404e+01   5.37021e+00   1.72186e-01  -1.85724e+05
NO ERROR MATRIX       
 FCN=6207.42 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9151.4    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.73077e+01   2.39613e+01   7.43679e+00   3.90697e+02
   2  Mean         4.61449e+03   1.38451e+03  -5.35975e-01   1.65176e+02
   3  Sigma        1.51148e+01   5.37021e+00   1.25589e-01  -2.63839e+04
 FCN=35.8272 FROM MIGRAD    STATUS=PROGRESS      124 CALLS         125 TOTAL
                     EDM=5.01188e-08    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   8.1 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.87524e+01   2.42134e-01   2.01768e-03  -1.83880e-03
   2  Mean         4.61055e+03   3.98822e-01   1.19151e-03  -7.76476e-05
   3  Sigma        3.48252e+01   1.05191e+00  -1.51369e-04  -2.52465e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.8654e-01  6.4212e-01  2.1713e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=35.8272 FROM MIGRAD    STATUS=CONVERGED     140 CALLS         141 TOTAL
                     EDM=7.79064e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.87524e+01   2.35645e-01   5.08318e-04  -1.83880e-03
   2  Mean         4.61055e+03   3.93185e-01   2.19848e-03  -7.65436e-05
   3  Sigma        3.48252e+01   1.01103e+00   3.25805e-05  -2.52169e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.553e-02  2.051e-02 -1.491e-01 
  2.051e-02  1.546e-01 -2.709e-01 
 -1.491e-01 -2.709e-01  1.022e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68558   1.000  0.221 -0.626
        2  0.73027   0.221  1.000 -0.681
        3  0.83750  -0.626 -0.681  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.553e-02  2.051e-02 -1.491e-01 
  2.051e-02  1.546e-01 -2.709e-01 
 -1.491e-01 -2.709e-01  1.022e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.056841     0.02099    -0.15261
Mean        	     0.02099     0.15825    -0.27726
Sigma       	    -0.15261    -0.27726      1.0465

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.22132    -0.62575
Mean        	     0.22132           1    -0.68133
Sigma       	    -0.62575    -0.68133           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      35.8272
NDf                       =           35
Edm                       =  7.79064e-08
NCalls                    =          141
Constant                  =      68.7524   +/-   0.238413    
Mean                      =      4610.55   +/-   0.397804    
Sigma                     =      34.8252   +/-   1.0229       	 (limited)

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
     1 Constant     8.14294e+01  2.44288e+01     no limits
     2 Mean         4.82325e+03  1.44697e+03     no limits
     3 Sigma        1.29089e+01  6.45444e+00    0.00000e+00  1.29089e+02
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
 FCN=21300 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.14294e+01   2.44288e+01   2.44288e+01  -3.22535e+02
   2  Mean         4.82325e+03   1.44697e+03   1.44697e+03  -4.38183e+02
   3  Sigma        1.29089e+01   6.45444e+00   1.72186e-01  -2.23610e+05
NO ERROR MATRIX       
 FCN=7094.45 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=10927    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.85631e+01   2.44288e+01   7.13377e+00   4.69587e+02
   2  Mean         4.82407e+03   1.44697e+03   8.23664e-01  -2.08992e+02
   3  Sigma        1.79932e+01   6.45444e+00   1.21722e-01  -3.04333e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.9761e-01  6.6530e-01  2.1371e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=51.5828 FROM MIGRAD    STATUS=CONVERGED     127 CALLS         128 TOTAL
                     EDM=1.28078e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.04463e+01   2.16712e-01   5.61393e-04  -6.63540e-04
   2  Mean         4.82835e+03   3.18295e-01   2.30234e-03   5.08832e-04
   3  Sigma        3.64659e+01   7.23895e-01   2.48144e-05  -2.28240e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.696e-02 -1.530e-02 -9.885e-02 
 -1.530e-02  1.013e-01  1.525e-01 
 -9.885e-02  1.525e-01  5.241e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68170   1.000 -0.222 -0.630
        2  0.70776  -0.222  1.000  0.662
        3  0.82674  -0.630  0.662  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.696e-02 -1.530e-02 -9.885e-02 
 -1.530e-02  1.013e-01  1.525e-01 
 -9.885e-02  1.525e-01  5.241e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.056338   -0.018354    -0.11858
Mean        	   -0.018354     0.12153     0.18289
Sigma       	    -0.11858     0.18289     0.62865

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.22181    -0.63009
Mean        	    -0.22181           1     0.66167
Sigma       	    -0.63009     0.66167           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      51.5828
NDf                       =           43
Edm                       =  1.28078e-08
NCalls                    =          128
Constant                  =      70.4463   +/-   0.237356    
Mean                      =      4828.35   +/-   0.348617    
Sigma                     =      36.4659   +/-   0.792855     	 (limited)

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
     1 Constant     7.99222e+01  2.39767e+01     no limits
     2 Mean         4.86492e+03  1.45948e+03     no limits
     3 Sigma        1.12757e+01  5.63784e+00    0.00000e+00  1.12757e+02
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
 FCN=18918.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.99222e+01   2.39767e+01   2.39767e+01  -2.89502e+02
   2  Mean         4.86492e+03   1.45948e+03   1.45948e+03   3.63209e+02
   3  Sigma        1.12757e+01   5.63784e+00   1.72186e-01  -1.93379e+05
NO ERROR MATRIX       
 FCN=6352.32 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9492.31    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.72551e+01   2.39767e+01   7.33292e+00   4.07913e+02
   2  Mean         4.86429e+03   1.45948e+03  -6.27345e-01   1.88137e+02
   3  Sigma        1.58193e+01   5.63784e+00   1.24345e-01  -2.70465e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.8532e-01  6.3960e-01  2.1751e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=53.9573 FROM MIGRAD    STATUS=CONVERGED     128 CALLS         129 TOTAL
                     EDM=9.55843e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.90122e+01   2.29701e-01   6.09303e-04   8.55031e-05
   2  Mean         4.86013e+03   3.67070e-01   2.31749e-03  -1.61869e-03
   3  Sigma        3.46671e+01   8.82937e-01   3.34686e-05  -2.44642e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.276e-02  1.844e-02 -1.253e-01 
  1.844e-02  1.347e-01 -2.231e-01 
 -1.253e-01 -2.231e-01  7.797e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68044   1.000  0.219 -0.618
        2  0.73680   0.219  1.000 -0.688
        3  0.83859  -0.618 -0.688  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.276e-02  1.844e-02 -1.253e-01 
  1.844e-02  1.347e-01 -2.231e-01 
 -1.253e-01 -2.231e-01  7.797e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.076944    0.026891    -0.18277
Mean        	    0.026891     0.19649    -0.32534
Sigma       	    -0.18277    -0.32534       1.137

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1      0.2187    -0.61794
Mean        	      0.2187           1    -0.68833
Sigma       	    -0.61794    -0.68833           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      53.9573
NDf                       =           37
Edm                       =  9.55843e-08
NCalls                    =          129
Constant                  =      69.0122   +/-   0.277388    
Mean                      =      4860.13   +/-   0.443274    
Sigma                     =      34.6671   +/-   1.06624      	 (limited)

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
     1 Constant     8.13451e+01  2.44035e+01     no limits
     2 Mean         5.07723e+03  1.52317e+03     no limits
     3 Sigma        1.34571e+01  6.72856e+00    0.00000e+00  1.34571e+02
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
 FCN=21990.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.13451e+01   2.44035e+01   2.44035e+01  -3.39694e+02
   2  Mean         5.07723e+03   1.52317e+03   1.52317e+03  -3.89308e+02
   3  Sigma        1.34571e+01   6.72856e+00   1.72186e-01  -2.32531e+05
NO ERROR MATRIX       
 FCN=7315.07 FROM MIGRAD    STATUS=PROGRESS       28 CALLS          29 TOTAL
                     EDM=11429.1    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.85515e+01   2.44035e+01   7.20638e+00   4.91903e+02
   2  Mean         5.07799e+03   1.52317e+03   7.60847e-01  -2.00865e+02
   3  Sigma        1.87483e+01   6.72856e+00   1.21527e-01  -3.10076e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.1127e-01  6.9698e-01  2.0918e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=67.4093 FROM MIGRAD    STATUS=CONVERGED     126 CALLS         127 TOTAL
                     EDM=1.79489e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.04201e+01   2.14040e-01   6.27345e-04  -3.32094e-04
   2  Mean         5.08201e+03   3.00554e-01   2.42329e-03   1.97262e-04
   3  Sigma        3.73150e+01   6.99109e-01   2.72971e-05  -7.62917e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.581e-02 -1.434e-02 -9.697e-02 
 -1.434e-02  9.033e-02  1.309e-01 
 -9.697e-02  1.309e-01  4.888e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68796   1.000 -0.223 -0.648
        2  0.66654  -0.223  1.000  0.623
        3  0.81289  -0.648  0.623  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.581e-02 -1.434e-02 -9.697e-02 
 -1.434e-02  9.033e-02  1.309e-01 
 -9.697e-02  1.309e-01  4.888e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.068627   -0.021486    -0.14526
Mean        	   -0.021486     0.13532     0.19606
Sigma       	    -0.14526     0.19606     0.73218

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.22297    -0.64803
Mean        	    -0.22297           1     0.62289
Sigma       	    -0.64803     0.62289           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      67.4093
NDf                       =           45
Edm                       =  1.79489e-09
NCalls                    =          127
Constant                  =      70.4201   +/-   0.261968    
Mean                      =      5082.01   +/-   0.367854    
Sigma                     =       37.315   +/-   0.855655     	 (limited)

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
     1 Constant     7.97529e+01  2.39259e+01     no limits
     2 Mean         5.11931e+03  1.53579e+03     no limits
     3 Sigma        1.15161e+01  5.75807e+00    0.00000e+00  1.15161e+02
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
 FCN=18703.3 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.97529e+01   2.39259e+01   2.39259e+01  -2.90206e+02
   2  Mean         5.11931e+03   1.53579e+03   1.53579e+03   4.16032e+02
   3  Sigma        1.15161e+01   5.75807e+00   1.72186e-01  -1.94229e+05
NO ERROR MATRIX       
 FCN=6232.43 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9484.85    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.69485e+01   2.39259e+01   7.19565e+00   4.12333e+02
   2  Mean         5.11858e+03   1.53579e+03  -7.30915e-01   2.15264e+02
   3  Sigma        1.60919e+01   5.75807e+00   1.22724e-01  -2.65504e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.8514e-01  6.3938e-01  2.1755e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=73.6959 FROM MIGRAD    STATUS=CONVERGED     127 CALLS         128 TOTAL
                     EDM=8.63693e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.91554e+01   2.27189e-01   7.07736e-04  -5.81083e-04
   2  Mean         5.11434e+03   3.32716e-01   2.43871e-03  -1.52110e-03
   3  Sigma        3.32773e+01   7.42849e-01   3.27174e-05  -4.70294e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.161e-02  1.630e-02 -1.030e-01 
  1.630e-02  1.107e-01 -1.714e-01 
 -1.030e-01 -1.714e-01  5.519e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.67459   1.000  0.216 -0.610
        2  0.74121   0.216  1.000 -0.693
        3  0.83864  -0.610 -0.693  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.161e-02  1.630e-02 -1.030e-01 
  1.630e-02  1.107e-01 -1.714e-01 
 -1.030e-01 -1.714e-01  5.519e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	      0.1001    0.031615    -0.19969
Mean        	    0.031615     0.21469     -0.3324
Sigma       	    -0.19969     -0.3324      1.0703

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.21566    -0.61009
Mean        	     0.21566           1    -0.69345
Sigma       	    -0.61009    -0.69345           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      73.6959
NDf                       =           38
Edm                       =  8.63693e-08
NCalls                    =          128
Constant                  =      69.1554   +/-   0.316386    
Mean                      =      5114.34   +/-   0.463344    
Sigma                     =      33.2773   +/-   1.0345       	 (limited)

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
     1 Constant     8.02314e+01  2.40694e+01     no limits
     2 Mean         5.33372e+03  1.60012e+03     no limits
     3 Sigma        1.26323e+01  6.31613e+00    0.00000e+00  1.26323e+02
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
 FCN=20386 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.02314e+01   2.40694e+01   2.40694e+01  -3.15423e+02
   2  Mean         5.33372e+03   1.60012e+03   1.60012e+03  -4.32566e+02
   3  Sigma        1.26323e+01   6.31613e+00   1.72186e-01  -2.13673e+05
NO ERROR MATRIX       
 FCN=6762.86 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=10419.9    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.73608e+01   2.40694e+01   7.12938e+00   4.53693e+02
   2  Mean         5.33454e+03   1.60012e+03   8.20556e-01  -1.98976e+02
   3  Sigma        1.76219e+01   6.31613e+00   1.22049e-01  -2.90615e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.9774e-01  6.6487e-01  2.1374e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=39.4256 FROM MIGRAD    STATUS=CONVERGED     127 CALLS         128 TOTAL
                     EDM=2.27115e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.94671e+01   2.19065e-01   4.97324e-04  -7.75682e-04
   2  Mean         5.33872e+03   3.21871e-01   2.54570e-03   7.34682e-04
   3  Sigma        3.58584e+01   7.36238e-01   2.25853e-05  -2.89350e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.799e-02 -1.560e-02 -1.017e-01 
 -1.560e-02  1.036e-01  1.566e-01 
 -1.017e-01  1.566e-01  5.421e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68210   1.000 -0.221 -0.630
        2  0.70725  -0.221  1.000  0.661
        3  0.82665  -0.630  0.661  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.799e-02 -1.560e-02 -1.017e-01 
 -1.560e-02  1.036e-01  1.566e-01 
 -1.017e-01  1.566e-01  5.421e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.045048   -0.014643   -0.095448
Mean        	   -0.014643    0.097251     0.14703
Sigma       	   -0.095448     0.14703     0.50885

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.22123    -0.63043
Mean        	    -0.22123           1     0.66092
Sigma       	    -0.63043     0.66092           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      39.4256
NDf                       =           42
Edm                       =  2.27115e-08
NCalls                    =          128
Constant                  =      69.4671   +/-   0.212245    
Mean                      =      5338.72   +/-   0.311851    
Sigma                     =      35.8584   +/-   0.713317     	 (limited)

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
     1 Constant     7.85412e+01  2.35624e+01     no limits
     2 Mean         5.37601e+03  1.61280e+03     no limits
     3 Sigma        1.13128e+01  5.65641e+00    0.00000e+00  1.13128e+02
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
 FCN=18922.9 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.85412e+01   2.35624e+01   2.35624e+01  -2.90686e+02
   2  Mean         5.37601e+03   1.61280e+03   1.61280e+03   2.89545e+02
   3  Sigma        1.13128e+01   5.65641e+00   1.72186e-01  -1.90225e+05
NO ERROR MATRIX       
 FCN=6401.85 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9357.99    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.58816e+01   2.35624e+01   7.34038e+00   4.05001e+02
   2  Mean         5.37549e+03   1.61280e+03  -5.25034e-01   1.57756e+02
   3  Sigma        1.59347e+01   5.65641e+00   1.25955e-01  -2.72559e+04
 FCN=49.9176 FROM MIGRAD    STATUS=PROGRESS      123 CALLS         124 TOTAL
                     EDM=1.13784e-06    STRATEGY= 1  ERROR MATRIX UNCERTAINTY   8.8 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.75682e+01   2.33007e-01   3.68165e-03   4.21069e-04
   2  Mean         5.37129e+03   4.29074e-01   2.74819e-03  -9.61494e-04
   3  Sigma        3.72559e+01   1.14059e+00  -3.06038e-04  -9.74914e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.8604e-01  6.4081e-01  2.1731e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=49.9176 FROM MIGRAD    STATUS=CONVERGED     148 CALLS         149 TOTAL
                     EDM=3.34511e-10    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.75680e+01   2.29286e-01   5.81603e-04   1.27706e-04
   2  Mean         5.37129e+03   4.23225e-01   2.56123e-03   1.66345e-05
   3  Sigma        3.72569e+01   1.10336e+00   3.94568e-05   1.80342e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.257e-02  2.144e-02 -1.582e-01 
  2.144e-02  1.791e-01 -3.187e-01 
 -1.582e-01 -3.187e-01  1.218e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.68555   1.000  0.221 -0.625
        2  0.73147   0.221  1.000 -0.682
        3  0.83799  -0.625 -0.682  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.257e-02  2.144e-02 -1.582e-01 
  2.144e-02  1.791e-01 -3.187e-01 
 -1.582e-01 -3.187e-01  1.218e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.070926    0.028922    -0.21339
Mean        	    0.028922     0.24165    -0.42991
Sigma       	    -0.21339    -0.42991      1.6427

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.22092    -0.62517
Mean        	     0.22092           1    -0.68235
Sigma       	    -0.62517    -0.68235           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      49.9176
NDf                       =           37
Edm                       =  3.34511e-10
NCalls                    =          149
Constant                  =       67.568   +/-   0.266319    
Mean                      =      5371.29   +/-   0.491584    
Sigma                     =      37.2569   +/-   1.28157      	 (limited)
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
     1 Constant     8.01447e+01  2.40434e+01     no limits
     2 Mean         5.59760e+03  1.67928e+03     no limits
     3 Sigma        1.32181e+01  6.60905e+00    0.00000e+00  1.32181e+02
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
 FCN=21513.5 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.01447e+01   2.40434e+01   2.40434e+01  -3.31450e+02
   2  Mean         5.59760e+03   1.67928e+03   1.67928e+03  -3.18308e+02
   3  Sigma        1.32181e+01   6.60905e+00   1.72186e-01  -2.24291e+05
NO ERROR MATRIX       
 FCN=7209.5 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=11047.5    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.73047e+01   2.40434e+01   7.16003e+00   4.78744e+02
   2  Mean         5.59824e+03   1.67928e+03   6.35721e-01  -1.66049e+02
   3  Sigma        1.84776e+01   6.60905e+00   1.22888e-01  -3.07355e+04
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.1639e-01  7.1196e-01  2.0717e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=50.5484 FROM MIGRAD    STATUS=CONVERGED     126 CALLS         127 TOTAL
                     EDM=3.95839e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.90786e+01   2.16615e-01   5.46033e-04  -5.55183e-04
   2  Mean         5.60202e+03   3.24551e-01   2.67125e-03   3.02354e-03
   3  Sigma        3.85119e+01   8.14854e-01   2.80786e-05  -8.28013e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.692e-02 -1.558e-02 -1.165e-01 
 -1.558e-02  1.053e-01  1.585e-01 
 -1.165e-01  1.585e-01  6.640e-01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.69496   1.000 -0.222 -0.660
        2  0.64268  -0.222  1.000  0.599
        3  0.80726  -0.660  0.599  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.692e-02 -1.558e-02 -1.165e-01 
 -1.558e-02  1.053e-01  1.585e-01 
 -1.165e-01  1.585e-01  6.640e-01 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.053905   -0.017904    -0.13385
Mean        	   -0.017904     0.12101     0.18214
Sigma       	    -0.13385     0.18214     0.76285

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1    -0.22168    -0.66008
Mean        	    -0.22168           1     0.59948
Sigma       	    -0.66008     0.59948           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      50.5484
NDf                       =           44
Edm                       =  3.95839e-07
NCalls                    =          127
Constant                  =      69.0786   +/-   0.232175    
Mean                      =      5602.02   +/-   0.347864    
Sigma                     =      38.5119   +/-   0.873388     	 (limited)
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
     1 Constant     7.89513e+01  2.36854e+01     no limits
     2 Mean         5.63909e+03  1.69173e+03     no limits
     3 Sigma        1.13140e+01  5.65702e+00    0.00000e+00  1.13140e+02
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
 FCN=18907.2 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.89513e+01   2.36854e+01   2.36854e+01  -2.87324e+02
   2  Mean         5.63909e+03   1.69173e+03   1.69173e+03   2.29221e+02
   3  Sigma        1.13140e+01   5.65702e+00   1.72186e-01  -1.90875e+05
NO ERROR MATRIX       
 FCN=6429.43 FROM MIGRAD    STATUS=PROGRESS       27 CALLS          28 TOTAL
                     EDM=9433.82    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     8.62057e+01   2.36854e+01   7.25441e+00   4.07399e+02
   2  Mean         5.63868e+03   1.69173e+03  -4.10957e-01   1.35700e+02
   3  Sigma        1.59233e+01   5.65702e+00   1.25621e-01  -2.73794e+04
 FCN=42.3765 FROM MIGRAD    STATUS=PROGRESS      122 CALLS         123 TOTAL
                     EDM=6.1339e-07    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  10.2 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.76580e+01   2.29844e-01   4.61300e-03  -8.15057e-03
   2  Mean         5.63520e+03   3.88984e-01   2.57508e-03  -8.03245e-04
   3  Sigma        3.70953e+01   1.09536e+00  -4.00563e-04  -6.69804e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.0963e-01  6.9781e-01  2.0926e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=42.3765 FROM MIGRAD    STATUS=CONVERGED     138 CALLS         139 TOTAL
                     EDM=9.41822e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     6.76580e+01   2.32969e-01   5.35633e-04  -8.15057e-03
   2  Mean         5.63520e+03   3.86124e-01   2.68707e-03  -8.02080e-04
   3  Sigma        3.70953e+01   1.08665e+00   3.82600e-05  -6.69452e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  5.427e-02  2.017e-02 -1.674e-01 
  2.017e-02  1.491e-01 -2.565e-01 
 -1.674e-01 -2.565e-01  1.181e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.69915   1.000  0.224 -0.661
        2  0.65673   0.224  1.000 -0.611
        3  0.81420  -0.661 -0.611  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  5.427e-02  2.017e-02 -1.674e-01 
  2.017e-02  1.491e-01 -2.565e-01 
 -1.674e-01 -2.565e-01  1.181e+00 

Covariance Matrix:

            	    Constant        Mean       Sigma
Constant    	    0.062161    0.023097     -0.1917
Mean        	    0.023097     0.17076     -0.2938
Sigma       	     -0.1917     -0.2938      1.3526

Correlation Matrix:

            	    Constant        Mean       Sigma
Constant    	           1     0.22418    -0.66112
Mean        	     0.22418           1    -0.61135
Sigma       	    -0.66112    -0.61135           1
****************************************
Minimizer is Minuit / Migrad
Chi2                      =      42.3765
NDf                       =           37
Edm                       =  9.41822e-07
NCalls                    =          139
Constant                  =       67.658   +/-   0.249322    
Mean                      =       5635.2   +/-   0.413227    
Sigma                     =      37.0953   +/-   1.16293      	 (limited)

```
---
