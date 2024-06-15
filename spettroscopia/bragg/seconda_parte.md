## 1 : Calibrazione e risoluzione energetica
il file utilizzato è quello a 500mb con 3000 eventi

si è preso il grafico dell'integral e si è fatto un fit, come indicato nelle note, sulla spalla destra secondo i seguenti range

|        picco       |     range          |
|--------------------|--------------------|
|        basso       |    5025 - 5300     |
|        medio       |    5825 - 6050     |
|        alto        |    6160 - 6400     |

il grafico dell'integral è stato salvato per un range da 4500 - 6700

come per la parte precedente il fit per il nettunio è problematico, in quanto la gaussiana non presenta esattamente un picco ma una forma più rettangolare, si vede infatti che nei risultati della calibrazione, è il punto peggio di tutti con un residuo estremamente elevato

i valori noti per l'energia della particella sono quelli usati per la parte precedente 

il coefficiente di conversione si ricava dai parametri del fit lineare

la risoluzione energetica, secondo la formula 

$$ R = FWHM / E = 2\sqrt{2ln(2)}*\sigma / E $$

è stata calcolata utilizzando i valori di energia e sigma in [a.u.]

delle tre risoluzioni (una per picco) è stata calcolata la compatibilità (i valori sono tra loro compatibili) e ne è stata fatta la media pesata (non sapendo che media fosse richiesta si è presa questa)

---

## 2 : Modifica del calcolo della width, velocità di drift e bragg kleeman


---

## 3 : Segnali del preamplificatore

Note:

- la baseline fluttua molto

- altezza del segnale è proporzionale alla carica

- la derivata temporale del segnale è la curva di bragg

. - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . - . 

Procedura di analisi:

- pre-processing (smoothing / running mean)

- riconoscere dal plot signal i segnali buoni e cattivi 

	la persona che espone dovrebbe trovare "una buona spiegazione" per questa roba

- implementare dei controlli di qualità

	un semplice controllo di qualità che è stato inserito è verificare che i primi 20 punti del segnale siano inferiori agli ultimi 20 dello stesso, se questo non accade il segnale viene scartato dalle successive analisi

- calcolare altezza del segnale

	il calcolo per l'altezza del segnale, in questo caso la parte interessante è la vmax, è rimasto lo stesso rispetto ai precedenti, un semplice scorrimento tra i punti fino alla determinazione del massimo (non dovrebbe creare gravi problemi o errori)

- calcolare larghezza del segnale 

- generare gli histogrammi e confrontarli con quelli precedenti

- calcolare velocità di drift

- fare la derivata digitale 


---
