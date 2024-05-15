```
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
 FCN=84517 FROM MIGRAD    STATUS=INITIATE       53 CALLS          54 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           0.00000e+00   3.00000e-01   0.00000e+00  -3.67203e+02
   2  p1           0.00000e+00   3.00000e-01   0.00000e+00   0.00000e+00
NO ERROR MATRIX       
 FCN=20182.4 FROM MIGRAD    STATUS=PROGRESS       62 CALLS          63 TOTAL
                     EDM=4.50294e+10    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           3.50404e+02   3.00000e-01   3.50404e+02  -2.48481e-07
   2  p1           0.00000e+00   3.00000e-01  -0.00000e+00   1.50049e+05
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         7.9929e-02  1.9201e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=57.3393 FROM MIGRAD    STATUS=CONVERGED     122 CALLS         123 TOTAL
                     EDM=9.35261e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           1.46359e+03   1.28554e+01   1.87806e-02  -2.34129e-05
   2  p1          -1.66817e+00   1.79424e-02   2.62129e-05  -1.92964e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  2    ERR DEF=1
  1.653e+02 -2.122e-01 
 -2.122e-01  3.219e-04 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.92007   1.000 -0.920
        2  0.92007  -0.920  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   2    NPAR=  2    ERR DEF=1
  1.653e+02 -2.122e-01 
 -2.122e-01  3.219e-04 
 FCN=57.3393 FROM MIGRAD    STATUS=CONVERGED     122 CALLS         123 TOTAL
                     EDM=9.35261e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  p0           1.46359e+03   1.28554e+01                            
   2  p1          -1.66817e+00   1.79424e-02                            


```
