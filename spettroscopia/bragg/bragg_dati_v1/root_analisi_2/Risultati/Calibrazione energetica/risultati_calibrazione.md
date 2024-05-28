# Risultati della calibrazione energetica

## Fit lineare
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
 FCN=1.57078e+08 FROM MIGRAD    STATUS=INITIATE       29 CALLS          30 TOTAL
                     EDM= unknown      STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           0.00000e+00   3.00000e-01   0.00000e+00  -6.44244e+04
   2  p1           1.31232e-01   3.00000e-01   1.31232e-01  -2.73814e+09
NO ERROR MATRIX       
 FCN=149848 FROM MIGRAD    STATUS=PROGRESS       40 CALLS          41 TOTAL
                     EDM=115522    STRATEGY= 1      NO ERROR MATRIX       
  EXT PARAMETER               CURRENT GUESS       STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0           4.51971e+03   3.00000e-01   4.51971e+03  -8.67862e+02
   2  p1           1.70679e-01   3.00000e-01   3.94463e-02  -7.26615e+06
 MIGRAD MINIMIZATION HAS CONVERGED.
 MIGRAD WILL VERIFY CONVERGENCE AND ERROR MATRIX.
   START COVARIANCE MATRIX CALCULATION.
 EIGENVALUES OF SECOND-DERIVATIVE MATRIX:
         6.2831e-04  1.9994e+00
 COVARIANCE MATRIX CALCULATED SUCCESSFULLY
 FCN=3.25559 FROM MIGRAD    STATUS=CONVERGED     129 CALLS         130 TOTAL
                     EDM=6.82446e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                                   STEP         FIRST   
  NO.   NAME      VALUE            ERROR          SIZE      DERIVATIVE 
   1  p0          -2.77515e+01   7.75293e+01   2.76795e-03   5.04379e-05
   2  p1           9.37223e-01   1.27564e-02   4.55434e-07   3.97290e-01
 EXTERNAL ERROR MATRIX.    NDIM=  25    NPAR=  2    ERR DEF=1
  6.011e+03 -9.884e-01 
 -9.884e-01  1.627e-04 
 PARAMETER  CORRELATION COEFFICIENTS  
       NO.  GLOBAL      1      2
        1  0.99937   1.000 -0.999
        2  0.99937  -0.999  1.000
Info in <TMinuitMinimizer::Minimize>: Finished to run MIGRAD - status 0
 EXTERNAL ERROR MATRIX.    NDIM=   2    NPAR=  2    ERR DEF=1
  6.011e+03 -9.884e-01 
 -9.884e-01  1.627e-04 
 FCN=3.25559 FROM MIGRAD    STATUS=CONVERGED     129 CALLS         130 TOTAL
                     EDM=6.82446e-07    STRATEGY= 1      ERROR MATRIX ACCURATE 
  EXT PARAMETER                  PARABOLIC         MINOS ERRORS        
  NO.   NAME      VALUE            ERROR      NEGATIVE      POSITIVE   
   1  p0          -2.77515e+01   7.75293e+01                            
   2  p1           9.37223e-01   1.27564e-02                        
```
## Risoluzioni e compatibilità
```
 Print delle risoluzioni 

Risoluzione Nettunio: 
0.0443474 \pm 0.00871232

Risoluzione Americio: 
0.0287168 \pm 0.00181188

Risoluzione Curio: 
0.022526 \pm 0.00105754

 ............................................................................... 
 Print della matrice dei coefficienti di compatibilità (spoiler non è una matrice): 

 Nettunio - Americio: 
0.52086

 Nettunio - Curio: 
0.9035

 Americio - Curio: 
0.273944

 ............................................................................... 
Media pesata dei valori di risoluzione: 
0.0243192 \pm 0.00090837

```
