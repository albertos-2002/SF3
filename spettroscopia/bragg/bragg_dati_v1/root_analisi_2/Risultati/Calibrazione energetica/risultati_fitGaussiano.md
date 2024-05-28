# Risultati del fit gaussiano per i tre picchi dell'integral a 500mb e 3k eventi


## Fit basso
```
Warning in <ROOT::Math::FitConfig::CreateMinimizer>: Could not create the Minuit2 minimizer. Try using the minimizer Minuit
 **********
 **   13 **SET PRINT           2
 **********
 **********
 **   14 **SET NOGRAD
 **********
 PARAMETER DEFINITIONS:
    NO.   NAME         VALUE      STEP SIZE      LIMITS
     1 Constant     1.69212e+01  5.07636e+00     no limits
     2 Mean         5.13652e+03  1.54096e+03     no limits
     3 Sigma        6.59150e+01  3.29575e+01    0.00000e+00  6.59150e+02
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
 FCN=12.3528 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.69212e+01   5.07636e+00   5.07636e+00  -2.28174e-01
   2  Mean         5.13652e+03   1.54096e+03   1.54096e+03   1.54360e-01
   3  Sigma        6.59150e+01   3.29575e+01   1.72186e-01  -1.07538e+02
NO ERROR MATRIX       
 FCN=8.24354 FROM MIGRAD    STATUS=PROGRESS       22 CALLS          23 TOTAL
                     EDM=6.84098    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.72744e+01   5.07636e+00   3.53221e-01   1.30368e+00
   2  Mean         5.12902e+03   1.54096e+03  -7.50144e+00   1.86565e-01
   3  Sigma        7.90289e+01   3.29575e+01   6.36597e-02   7.57326e+00
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.4727e-01  6.5046e-01  2.2023e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=5.67289 FROM MIGRAD    STATUS=CONVERGED      80 CALLS          81 TOTAL
                     EDM=1.78156e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.51180e+01   1.68661e+00   1.68335e-03   3.24356e-05
   2  Mean         5.10989e+03   2.05750e+01   1.47062e-02  -8.84595e-06
   3  Sigma        9.62325e+01   1.89015e+01   5.08155e-05  -3.03201e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  2.845e+00  7.492e+00 -1.662e+01 
  7.492e+00  4.233e+02 -3.080e+02 
 -1.662e+01 -3.080e+02  3.581e+02 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.61148   1.000  0.216 -0.521
        2  0.82387   0.216  1.000 -0.791
        3  0.86856  -0.521 -0.791  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  2.845e+00  7.492e+00 -1.662e+01 
  7.492e+00  4.233e+02 -3.080e+02 
 -1.662e+01 -3.080e+02  3.581e+02 
 FCN=5.67289 FROM MIGRAD    STATUS=CONVERGED      80 CALLS          81 TOTAL
                     EDM=1.78156e-08    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  Constant     1.51180e+01   1.68661e+00                            
   2  Mean         5.10989e+03   2.05750e+01                            
   3  Sigma        9.62325e+01   1.89015e+01                            
(TFitResultPtr) <nullptr TFitResult>

```
## Fit medio
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
     1 Constant     1.47034e+02  4.41102e+01     no limits
     2 Mean         5.90693e+03  1.77208e+03     no limits
     3 Sigma        5.21653e+01  2.60827e+01    0.00000e+00  5.21653e+02
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
 FCN=54.1122 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.47034e+02   4.41102e+01   4.41102e+01  -4.25499e-02
   2  Mean         5.90693e+03   1.77208e+03   1.77208e+03   2.54344e+00
   3  Sigma        5.21653e+01   2.60827e+01   1.72186e-01  -6.74382e+02
NO ERROR MATRIX       
 FCN=13.9698 FROM MIGRAD    STATUS=PROGRESS       26 CALLS          27 TOTAL
                     EDM=24.5293    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.48049e+02   4.41102e+01   1.01525e+00   9.28526e-01
   2  Mean         5.89221e+03   1.77208e+03  -1.47182e+01   4.89810e-01
   3  Sigma        6.51571e+01   2.60827e+01   7.89457e-02   5.78669e+01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         1.8941e-01  6.6302e-01  2.1476e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=6.61242 FROM MIGRAD    STATUS=CONVERGED      81 CALLS          82 TOTAL
                     EDM=2.08674e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.32563e+02   5.77672e+00   6.02190e-03  -7.80115e-05
   2  Mean         5.88751e+03   4.79314e+00   4.24145e-03   1.22827e-04
   3  Sigma        7.17975e+01   4.52968e+00   1.87936e-05   8.99940e-03
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  3.337e+01  5.672e+00 -1.481e+01 
  5.672e+00  2.297e+01 -1.551e+01 
 -1.481e+01 -1.551e+01  2.052e+01 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.63338   1.000  0.205 -0.566
        2  0.75400   0.205  1.000 -0.714
        3  0.83295  -0.566 -0.714  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  3.337e+01  5.672e+00 -1.481e+01 
  5.672e+00  2.297e+01 -1.551e+01 
 -1.481e+01 -1.551e+01  2.052e+01 
 FCN=6.61242 FROM MIGRAD    STATUS=CONVERGED      81 CALLS          82 TOTAL
                     EDM=2.08674e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  Constant     1.32563e+02   5.77672e+00                            
   2  Mean         5.88751e+03   4.79314e+00                            
   3  Sigma        7.17975e+01   4.52968e+00                            
(TFitResultPtr) <nullptr TFitResult>

```
## Fit altro
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
     1 Constant     1.11464e+02  3.34392e+01     no limits
     2 Mean         6.23453e+03  1.87036e+03     no limits
     3 Sigma        4.90728e+01  2.45364e+01    0.00000e+00  4.90728e+02
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
 FCN=32.3502 FROM MIGRAD    STATUS=INITIATE       14 CALLS          15 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.11464e+02   3.34392e+01   3.34392e+01  -1.34046e-01
   2  Mean         6.23453e+03   1.87036e+03   1.87036e+03   1.74876e+00
   3  Sigma        4.90728e+01   2.45364e+01   1.72186e-01  -4.98546e+02
NO ERROR MATRIX       
 FCN=11.3345 FROM MIGRAD    STATUS=PROGRESS       24 CALLS          25 TOTAL
                     EDM=13.1066    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.13600e+02   3.34392e+01   2.13632e+00   6.72150e-01
   2  Mean         6.22508e+03   1.87036e+03  -9.45366e+00   6.73531e-01
   3  Sigma        5.64834e+01   2.45364e+01   4.87709e-02   5.17426e+01
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         2.6253e-01  7.5224e-01  1.9852e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=7.67634 FROM MIGRAD    STATUS=CONVERGED      72 CALLS          73 TOTAL
                     EDM=2.50574e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  Constant     1.05069e+02   5.05636e+00   6.02436e-03  -1.35496e-05
   2  Mean         6.22112e+03   3.76649e+00   4.03755e-03  -1.35911e-04
   3  Sigma        5.95106e+01   2.79365e+00   1.62226e-05  -5.48208e-02
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  3    ERR DEF=1
  2.557e+01  3.086e+00 -7.299e+00 
  3.086e+00  1.419e+01 -6.701e+00 
 -7.299e+00 -6.701e+00  7.805e+00 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2      3
        1  0.56025   1.000  0.162 -0.517
        2  0.66603   0.162  1.000 -0.637
        3  0.76233  -0.517 -0.637  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   3    NPAR=  3    ERR DEF=1
  2.557e+01  3.086e+00 -7.299e+00 
  3.086e+00  1.419e+01 -6.701e+00 
 -7.299e+00 -6.701e+00  7.805e+00 
 FCN=7.67634 FROM MIGRAD    STATUS=CONVERGED      72 CALLS          73 TOTAL
                     EDM=2.50574e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  Constant     1.05069e+02   5.05636e+00                            
   2  Mean         6.22112e+03   3.76649e+00                            
   3  Sigma        5.95106e+01   2.79365e+00                            
(TFitResultPtr) <nullptr TFitResult>

```
