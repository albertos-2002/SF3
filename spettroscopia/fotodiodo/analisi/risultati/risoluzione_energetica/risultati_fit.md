## shaping time 3us

```
Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   21 **SET PRINT           2
 **********
 **********
 **   22 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     7.94802e+01  1.83110e+00     no limits
     2 Mean         5.39768e+02  3.10838e-01     no limits
     3 Sigma        1.28539e+01  2.53407e-01    0.00000e+00  1.28539e+02
 **********
 **   23 **SET ERR           1
 **********
 **********
 **   24 **SET PRINT           2
 **********
 **********
 **   25 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   26 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=99.4706 FROM MIGRAD    STATUS=INITIATE       12 CALLS          13 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.94802e+01   1.83110e+00   1.83110e+00   5.71597e+00
   2  Mean         5.39768e+02   3.10838e-01   3.10838e-01   7.16502e+00
   3  Sigma        1.28539e+01   2.53407e-01   6.57177e-03   2.30401e+02
NO ERROR MATRIX       
 FCN=81.8819 FROM MIGRAD    STATUS=PROGRESS       20 CALLS          21 TOTAL
                     EDM=18.3771    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.37157e+01   1.83110e+00  -5.76458e+00   3.73821e-01
   2  Mean         5.39515e+02   3.10838e-01  -2.52728e-01   3.19542e-01
   3  Sigma        1.27688e+01   2.53407e-01  -2.21102e-03  -9.06617e+02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.8428e-01  9.9620e-01  1.6195e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=72.6355 FROM MIGRAD    STATUS=CONVERGED      60 CALLS          61 TOTAL
                     EDM=4.22091e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     7.00649e+01   1.83110e+00   6.10845e-03  -1.04652e-04
   2  Mean         5.39350e+02   3.10838e-01   1.28147e-03   2.82040e-03
   3  Sigma        1.35139e+01   2.53407e-01   2.12031e-05   4.86805e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  3.353e+00  5.761e-02 -2.808e-01 
  5.761e-02  9.662e-02 -1.401e-02 
 -2.808e-01 -1.401e-02  6.422e-02 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.60521   1.000  0.101 -0.605
        2  0.17806   0.101  1.000 -0.178
        3  0.61643  -0.605 -0.178  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  3.353e+00  5.761e-02 -2.808e-01 
  5.761e-02  9.662e-02 -1.401e-02 
 -2.808e-01 -1.401e-02  6.422e-02 
 FCN=72.6355 FROM MIGRAD    STATUS=CONVERGED      60 CALLS          61 TOTAL
                     EDM=4.22091e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  Constant     7.00649e+01   1.83110e+00                            
   2  Mean         5.39350e+02   3.10838e-01                            
   3  Sigma        1.35139e+01   2.53407e-01                            

```

## shaping time 4us

```
Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   27 **SET PRINT           2
 **********
 **********
 **   28 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.00181e+02  3.00543e+01     no limits
     2 Mean         5.30542e+02  1.59163e+02     no limits
     3 Sigma        1.20923e+01  6.04614e+00    0.00000e+00  1.20923e+02
 **********
 **   29 **SET ERR           1
 **********
 **********
 **   30 **SET PRINT           2
 **********
 **********
 **   31 **SET STR           1
 **********
 NOW USING STRATEGY  1: TRY TO BALANCE SPEED AGAINST RELIABILITY
 **********
 **   32 **MIGRAD        1345        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=90.0419 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.00181e+02   3.00543e+01   3.00543e+01  -1.62572e+00
   2  Mean         5.30542e+02   1.59163e+02   1.59163e+02   6.16472e+00
   3  Sigma        1.20923e+01   6.04614e+00   1.72186e-01  -2.31203e+03
NO ERROR MATRIX       
 FCN=58.4919 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=31.797    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.02411e+02   3.00543e+01   2.22945e+00   2.77171e+00
   2  Mean         5.30350e+02   1.59163e+02  -1.92192e-01   7.34332e+00
   3  Sigma        1.30108e+01   6.04614e+00   2.49080e-02  -1.65997e+02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.3831e-01  9.7402e-01  1.6877e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=44.3615 FROM MIGRAD    STATUS=CONVERGED      71 CALLS          72 TOTAL
                     EDM=2.63618e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     9.43311e+01   2.23408e+00   5.58214e-03  -8.70736e-05
   2  Mean         5.29966e+02   2.88373e-01   9.26029e-04   1.01281e-04
   3  Sigma        1.37335e+01   2.77488e-01   1.77556e-05  -4.04050e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  4.991e+00  6.495e-02 -4.025e-01 
  6.495e-02  8.316e-02 -1.682e-02 
 -4.025e-01 -1.682e-02  7.700e-02 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.65021   1.000  0.101 -0.649
        2  0.21529   0.101  1.000 -0.210
        3  0.66528  -0.649 -0.210  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  4.991e+00  6.495e-02 -4.025e-01 
  6.495e-02  8.316e-02 -1.682e-02 
 -4.025e-01 -1.682e-02  7.700e-02 
 FCN=44.3615 FROM MIGRAD    STATUS=CONVERGED      71 CALLS          72 TOTAL
                     EDM=2.63618e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  Constant     9.43311e+01   2.23408e+00                            
   2  Mean         5.29966e+02   2.88373e-01                            
   3  Sigma        1.37335e+01   2.77488e-01                            

```

