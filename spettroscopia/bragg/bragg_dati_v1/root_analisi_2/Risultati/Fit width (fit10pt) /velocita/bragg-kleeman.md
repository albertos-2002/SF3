# Nettinio
``` 
 Fit nettunio: 
Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **    1 **SET PRINT           2
 **********
 **********
 **    2 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 p0           0.00000e+00  3.00000e-01     no limits
     2 p1           0.00000e+00  3.00000e-01     no limits
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
 **    6 **MIGRAD        1220        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=775502 FROM MIGRAD    STATUS=INITIATE        8 CALLS           9 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           0.00000e+00   3.00000e-01   3.00000e-01  -2.17900e+04
   2  p1           0.00000e+00   3.00000e-01   3.00000e-01  -4.18707e+01
NO ERROR MATRIX       
 FCN=63.956 FROM MIGRAD    STATUS=PROGRESS       16 CALLS          17 TOTAL
                     EDM=1.11019    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           3.55567e+01   3.00000e-01   3.55567e+01   9.23631e+00
   2  p1           1.85356e+04   3.00000e-01   1.85356e+04  -1.77180e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         4.5281e-03  1.9955e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=2.66572 FROM MIGRAD    STATUS=CONVERGED      36 CALLS          37 TOTAL
                     EDM=1.19088e-16    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           2.89181e+01   8.48960e-01   7.54431e-05  -1.75091e-07
   2  p1           2.19933e+04   4.42184e+02   3.92938e-02  -3.20603e-10
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  2    ERR DEF=1
  7.207e-01 -3.737e+02 
 -3.737e+02  1.955e+05 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.99547   1.000 -0.995
        2  0.99547  -0.995  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   2    NPAR=  2    ERR DEF=1
  7.207e-01 -3.737e+02 
 -3.737e+02  1.955e+05 
 FCN=2.66572 FROM MIGRAD    STATUS=CONVERGED      36 CALLS          37 TOTAL
                     EDM=1.19088e-16    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  p0           2.89181e+01   8.48960e-01                            
   2  p1           2.19933e+04   4.42184e+02                            


```

# Americio
``` 
 Fit americio: 
Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **    7 **SET PRINT           2
 **********
 **********
 **    8 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 p0           0.00000e+00  3.00000e-01     no limits
     2 p1           0.00000e+00  3.00000e-01     no limits
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
 **   12 **MIGRAD        1220        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=5.32748e+06 FROM MIGRAD    STATUS=INITIATE        8 CALLS           9 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           0.00000e+00   3.00000e-01   3.00000e-01  -1.24103e+05
   2  p1           0.00000e+00   3.00000e-01   3.00000e-01  -2.40301e+02
NO ERROR MATRIX       
 FCN=875.646 FROM MIGRAD    STATUS=PROGRESS       16 CALLS          17 TOTAL
                     EDM=14.136    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           4.28714e+01   3.00000e-01   4.28714e+01   7.16335e+01
   2  p1           2.21920e+04   3.00000e-01   2.21920e+04  -1.38385e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         4.0579e-03  1.9959e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=4.71464 FROM MIGRAD    STATUS=CONVERGED      42 CALLS          43 TOTAL
                     EDM=1.84377e-16    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           3.07062e+01   4.12629e-01   5.36863e-05   1.81527e-07
   2  p1           2.84819e+04   2.13347e+02   2.24115e-02   2.65383e-10
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  2    ERR DEF=1
  1.703e-01 -8.768e+01 
 -8.768e+01  4.552e+04 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.99594   1.000 -0.996
        2  0.99594  -0.996  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   2    NPAR=  2    ERR DEF=1
  1.703e-01 -8.768e+01 
 -8.768e+01  4.552e+04 
 FCN=4.71464 FROM MIGRAD    STATUS=CONVERGED      42 CALLS          43 TOTAL
                     EDM=1.84377e-16    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  p0           3.07062e+01   4.12629e-01                            
   2  p1           2.84819e+04   2.13347e+02                            


```

# Curio
``` 
 Fit curio: 
Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   13 **SET PRINT           2
 **********
 **********
 **   14 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 p0           0.00000e+00  3.00000e-01     no limits
     2 p1           0.00000e+00  3.00000e-01     no limits
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
 **   18 **MIGRAD        1220        0.01
 **********
 FIRST CALL TO USER FUNCTION AT NEW START POINT, WITH IFLAG=4.
 START MIGRAD MINIMIZATION.  STRATEGY  1.  CONVERGENCE WHEN EDM .LT. 1.00e-05
 FCN=2.689e+06 FROM MIGRAD    STATUS=INITIATE        8 CALLS           9 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           0.00000e+00   3.00000e-01   3.00000e-01  -5.88510e+04
   2  p1           0.00000e+00   3.00000e-01   3.00000e-01  -1.11834e+02
NO ERROR MATRIX       
 FCN=262.82 FROM MIGRAD    STATUS=PROGRESS       16 CALLS          17 TOTAL
                     EDM=2.83081    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           4.56540e+01   3.00000e-01   4.56540e+01   2.13801e+01
   2  p1           2.40597e+04   3.00000e-01   2.40597e+04  -4.05694e-02
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7937e-03  1.9972e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=9.46953 FROM MIGRAD    STATUS=CONVERGED      40 CALLS          41 TOTAL
                     EDM=8.63423e-16    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           3.37999e+01   7.45223e-01   8.79474e-05   2.75551e-07
   2  p1           3.03023e+04   3.92447e+02   4.63140e-02   6.20195e-10
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  2    ERR DEF=1
  5.554e-01 -2.916e+02 
 -2.916e+02  1.540e+05 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.99721   1.000 -0.997
        2  0.99721  -0.997  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   2    NPAR=  2    ERR DEF=1
  5.554e-01 -2.916e+02 
 -2.916e+02  1.540e+05 
 FCN=9.46953 FROM MIGRAD    STATUS=CONVERGED      40 CALLS          41 TOTAL
                     EDM=8.63423e-16    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  p0           3.37999e+01   7.45223e-01                            
   2  p1           3.03023e+04   3.92447e+02                            


```

