[Back to Home](readMe.md)

# Commenti analisi dati

### Estrazione dei dati dalle immagini

Questo passaggio è stato svolto con Fiji (ImageJ) con la funzione plot profile, che fornisce il profili di intensità per l'area selezionata

Sono stati salvati sia il grafico che i dati in formato .csv


### campi magnetici $B$ utilizzati, misurati in corrente $A$

$max : 11.39 A$

$B_1 : 9.5 A$

$B_2 : 7.7 A$

$\frac{max}{2} : 5.7 A$


---

## Linea teoriaca su quello che dobbiamo fare

**$B_{off}$**

prendere lo spettro e dividerlo in tre zone, una centrale e due laterali

considerare tre picchi consecutivi, determinarne la spaziatura tra i picchi delle varie zone, $\Delta x_{r.u.}$, e farne la media


calcolo della $\Delta \lambda _{r.u.}$ (le formule si trovano sulle slide oppure nella parte di teoria)

usare questo per calibrare l'asse "x" e passare da pixel a $nm$


larghezza dei picchi per le 3 zone

usando la calibrazione del punto precedente

$R(x_i) = \frac{\lambda}{\Delta \lambda}$

mediare i 3 valori ottenuti

.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-. 

**$B_{on}$**

calcolare lo split zeeman $\Delta \lambda _{zee}$ per le zone definite prima, e farne la media

calcolare il fattore di Landè per il campo massimo

.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

**$3 campi: B \in [\frac{B_{on}}{2},B_{on}[$**

calcolare lo split zeeman $\Delta \lambda _{zee}$ di 2 picchi

calcolare il fattore di Landè

fare il plot per:

y: $\Delta \lambda _{zee}$

x: $B$

.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

**Polarimetro**

$B = B_{max}$

lamina on

con il campo $B$ perpendicolare alla luce incidente ($\tetha = \frac{\pi}{2}$) fare una foto

il filtro va poi messo in due pirezioni perpendicolare tra loro $u_1 \perp u_2$ e fare per entrambi i casi una foto

svolgere una analisi qualitativa







