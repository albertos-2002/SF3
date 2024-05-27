# Fit per il copper
```
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
 FCN=9746 FROM MIGRAD    STATUS=INITIATE       42 CALLS          43 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           0.00000e+00   3.00000e-01   0.00000e+00  -4.54790e+03
   2  p1           0.00000e+00   3.00000e-01   0.00000e+00 -6.21525e+306
NO ERROR MATRIX       
 FCN=9745.99 FROM MIGRAD    STATUS=PROGRESS       63 CALLS          64 TOTAL
                     EDM=9.42665e-05    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           5.26447e-02   3.00000e-01   5.26447e-02  -2.25604e-01
   2  p1           9.03872e-02   3.00000e-01   9.03872e-02   1.44613e+00
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.7170e-04  1.9997e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=7269.52 FROM HESSE     STATUS=OK             10 CALLS         103 TOTAL
                     EDM=0.407058    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           2.19541e+04   1.89266e+04   1.83145e+01  -2.48298e-14
   2  p1           9.03872e-02   9.37482e-03   9.09835e-06   1.36112e+02
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.99973   1.000  1.000
        2  0.99973   1.000  1.000
 FCN=7269.48 FROM MIGRAD    STATUS=PROGRESS      108 CALLS         109 TOTAL
                     EDM=0.400929    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           2.13505e+04   1.89266e+04  -6.03605e+02  -8.66137e-05
   2  p1           9.00881e-02   9.37482e-03  -2.99062e-04   3.09837e+02
 FCN=7268.76 FROM MIGRAD    STATUS=PROGRESS      181 CALLS         182 TOTAL
                     EDM=0.415277    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  38.8 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           1.35942e+04   3.89681e+03  -1.18721e+03  -2.68422e-03
   2  p1           8.52562e-02   2.69768e-03  -8.94273e-04   3.57358e+03
 FCN=7264.5 FROM MIGRAD    STATUS=PROGRESS      273 CALLS         274 TOTAL
                     EDM=0.439817    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  27.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           4.82857e+03   1.03328e+03  -7.51370e+02  -8.71069e-03
   2  p1           7.40082e-02   2.02639e-03  -1.47596e-03   4.47947e+03
 FCN=7241.48 FROM MIGRAD    STATUS=PROGRESS      353 CALLS         354 TOTAL
                     EDM=9.78443    STRATEGY= 1  ERROR MATRIX UNCERTAINTY  49.1 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           9.46046e+02   1.64636e+02  -1.46716e+02  -1.99691e-01
   2  p1           5.65740e-02   1.48163e-03  -1.45783e-03   2.03478e+04
 FCN=5675.67 FROM MIGRAD    STATUS=PROGRESS      454 CALLS         455 TOTAL
                     EDM=101744    STRATEGY= 1  ERROR MATRIX UNCERTAINTY 100.0 per cent
  EXT PARAMETER                APPROXIMATE        STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           1.58467e+01   2.92085e+00  -2.96351e+01  -1.39151e+02
   2  p1           1.39554e-02   4.87114e-04  -1.10538e-02   3.93447e+05
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         8.2563e-02  1.9174e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=16.4637 FROM MIGRAD    STATUS=CONVERGED     538 CALLS         539 TOTAL
                     EDM=4.77939e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           5.77191e+00   1.47069e-01   1.19390e-04  -1.56784e-03
   2  p1           1.26855e-03   1.01900e-04   8.27235e-08   1.74436e+00
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  2    ERR DEF=1
  2.163e-02  1.375e-05 
  1.375e-05  1.038e-08 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.91744   1.000  0.917
        2  0.91744   0.917  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   2    NPAR=  2    ERR DEF=1
  2.163e-02  1.375e-05 
  1.375e-05  1.038e-08 
 FCN=16.4637 FROM MIGRAD    STATUS=CONVERGED     538 CALLS         539 TOTAL
                     EDM=4.77939e-09    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  p0           5.77191e+00   1.47069e-01                            
   2  p1           1.26855e-03   1.01900e-04                            

```

# Fit per l'argento
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
