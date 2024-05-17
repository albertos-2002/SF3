# Fit per il copper

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
 FCN=8058 FROM MIGRAD    STATUS=INITIATE       42 CALLS          43 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           0.00000e+00   3.00000e-01   0.00000e+00  -5.61094e+03
   2  p1           0.00000e+00   3.00000e-01   0.00000e+00 -6.83524e+306
NO ERROR MATRIX       
 FCN=8058 FROM MIGRAD    STATUS=PROGRESS       63 CALLS          64 TOTAL
                     EDM=2.90306e-06    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           6.46441e-02   3.00000e-01   6.46441e-02  -5.61224e-02
   2  p1           1.64377e-01   3.00000e-01   1.64377e-01   2.41008e-01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         3.5772e-04  1.9996e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=5536.62 FROM HESSE     STATUS=OK             10 CALLS         101 TOTAL
                     EDM=0.0203595    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           8.98530e+04   6.69057e+04   6.21229e+01  -3.66006e-14
   2  p1           1.64377e-01   1.24116e-02   1.20791e-05   2.29924e+01
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.99964   1.000  1.000
        2  0.99964   1.000  1.000
 FCN=5536.6 FROM MIGRAD    STATUS=PROGRESS      111 CALLS         112 TOTAL
                     EDM=0.00611888    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           8.50289e+04   6.69057e+04  -4.82412e+03  -8.72184e-05
   2  p1           1.63482e-01   1.24116e-02  -8.95240e-04   4.69115e+02
 FCN=5536.36 FROM MIGRAD    STATUS=PROGRESS      193 CALLS         194 TOTAL
                     EDM=0.0672454    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  24.6 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           5.23486e+04   2.98848e+04  -2.18376e+03  -2.65305e-04
   2  p1           1.55418e-01   8.69460e-03  -6.67871e-04   8.72480e+02
 FCN=5535.98 FROM MIGRAD    STATUS=PROGRESS      266 CALLS         267 TOTAL
                     EDM=0.621609    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  92.9 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           3.35582e+04   1.59317e+04  -1.07668e+03   2.53509e-04
   2  p1           1.47932e-01   7.21426e-03  -6.02715e-04  -4.48717e+02
 FCN=5534.84 FROM MIGRAD    STATUS=PROGRESS      352 CALLS         353 TOTAL
                     EDM=0.0041881    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  25.8 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           1.58934e+04   5.53258e+03  -4.18467e+03  -4.71152e-04
   2  p1           1.35525e-01   4.37084e-03  -3.97694e-03   5.78961e+02
 FCN=5530.04 FROM MIGRAD    STATUS=PROGRESS      448 CALLS         449 TOTAL
                     EDM=1.03226    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  72.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           4.93601e+03   1.28583e+03   1.45953e+02  -2.39166e-03
   2  p1           1.16034e-01   3.70470e-03   3.68205e-04   1.12642e+03
 FCN=5512.3 FROM MIGRAD    STATUS=PROGRESS      535 CALLS         536 TOTAL
                     EDM=0.0444108    STRATEGY= 1  ERROR MATRIX UNCERTAINTY 100.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           1.34723e+03   1.57642e+02  -2.25991e+01  -6.06221e-02
   2  p1           9.45672e-02   1.49299e-03  -2.14442e-04   6.40523e+03
 FCN=5397.77 FROM MIGRAD    STATUS=PROGRESS      638 CALLS         639 TOTAL
                     EDM=12.027    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  88.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           2.24655e+02   2.37175e+01   1.69945e+01  -1.48168e+00
   2  p1           6.51959e-02   1.32486e-03   8.99669e-04   2.86735e+04
 FCN=2059.23 FROM MIGRAD    STATUS=PROGRESS      740 CALLS         741 TOTAL
                     EDM=55576.5    STRATEGY= 1  ERROR MATRIX UNCERTAINTY 100.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           1.54592e+01   8.37745e-01   7.10838e+00  -8.29023e+01
   2  p1           1.72054e-02   5.89890e-04   3.13351e-03   2.99471e+05
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         8.0091e-02  1.9199e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=9.24415 FROM MIGRAD    STATUS=CONVERGED     800 CALLS         801 TOTAL
                     EDM=7.35764e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           6.43340e+00   1.82870e-01   1.12073e-04   5.24048e-03
   2  p1           5.80044e-03   2.01755e-04   1.23642e-07  -4.75133e+00
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  2    ERR DEF=1
  3.344e-02  3.394e-05 
  3.394e-05  4.071e-08 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.91991   1.000  0.920
        2  0.91991   0.920  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   2    NPAR=  2    ERR DEF=1
  3.344e-02  3.394e-05 
  3.394e-05  4.071e-08 
 FCN=9.24415 FROM MIGRAD    STATUS=CONVERGED     800 CALLS         801 TOTAL
                     EDM=7.35764e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  p0           6.43340e+00   1.82870e-01                            
   2  p1           5.80044e-03   2.01755e-04                            

```
