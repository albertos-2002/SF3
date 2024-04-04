# Esperienza di bragg  

## Dove si trovano le robe
Tutti i dati e le analisi si trovano dentro la cartella

**bragg_dati_v1**

- *export_graph*

	contiene due cartelle, differenziate in base alle fasi dell'esperienza:

	**1** : parte uno

	 **2** : parte due (misure raffinate)

	I grafici sono suddivisi per macroargomenti, quindi la cartella **integral** contine gli istogrammi per la variabile integral di tutti i set di dati

	sono stati calcolati i grafici anche per il 650mb a th14 anche se nelle analisi successive non viene considerato

- *presa_dati_v1*

	contiene i file .root dei dati grezzi sputati fuori dal root che si occupa di raccogliere i dati

- *presa_dati_v2*

- *root_analisi_1*

	contiene i file .root prodotti dopo il run di AnaBragg.C e le varie analisi svolte sui dati raccolti

	- fit integrale
	- fit vmax

	per i due punti precedenti sottolineo come l'errore inserito nel grafico per il valore medio della gaussiana fittata è quello fornito da root, non ho svolto ricerche su come vada interpretato, questo significa che se root mi da sia un risultato per il fit di media e sigma, come errore della media prendo quello sulla riga della media (vedere file contenente i risultati di fit)

	inoltre da qui in poi il 650mb a th14 viene scartato dato che in basso è presente un rumore elevato e le analisi vengono svolte solo per i th15

	- riconoscimento delle particelle (il discorso teorico si trova sotto)

- *root_analisi_2*

- *test_preliminari*

	contiene tutto, dai dati grezzi ai grafici per la presa dati da 500 eventi, utilizzata per la verifica preliminare del corretto funzionamento dello strumento

## Dettagli sulle analisi dati

### Riconoscimento delle particelle (questa procedura è maggiormente coerente con quello che nelle slide viene chimato calibrazione)

(dopo una breve riflessione su quello riportato nel pdf di giacomo e sulle slide fornite dai prof)

LA SEGUENTE PROCEDURA È UNA PURA IDEA DI COME OTTENERE LE INFORMAIZONI DESIDERATE, DEVE ESSERE RIVISTA, CONVALIDATA E SE POSSIBILE DIMOSTRATO IL FUNZIONAMENTO

(non si prende in considerazione la baseline)

Consideriamo come dato di fatto che la variabile *integral* prodotta nell AnaBragg.C sia l'energia della particella alpha (integrale dello stopping power)

Notiamo adesso (per ragioni non approfondite) che l'instogramma per l'integral come asse utilizza una u.a. (unità di misura arbitrarie), inoltre possiamo vedere che sono presenti tre distinti picchi insieme ad una zona che ci è stato detto di considerare rumore

Sappiamo a priori che la sorgente è composta da tre elementi distinti, che emettono particelle alpha ad energie distinte

Le slide del prof riportano un database dal cui recuperare le energie tabulate per le particelle, viene detto di fittare con una gaussiana i picchi e di considerare solo la riga più alta ed intensa riportata nel database (non ci poniamo particolari domande)

Quello che possiamo fare adesso (ipotesi che sostiene tutto il discorso) e che la conversione tra a.u. ed energia sia lineare, in questo modo possiamo far corrispondere le energia tabulate con quelle ricavate dal grafico, se il tutto è lineare, l'energia maggiore di una particella corrisponde al valore più alto nella scala delle a.u., ovviamente se consideriamo una "direzione positiva" (per un asse appartenente ad |R sembra la scelta più logica); arrivati a questo punto se la conversione è lineare significa che ogni incremento di una a.u. corrisponde ad un *dE* incremento, costante, di energia nelle udm classiche

Se queste ipotesi reggono un modo per trovare questo fattore di conversione è quello di eseguire un fit lineare, dal quale mi aspetto che il coefficiente di correlazione sia 1 (aumento di energia implica un aumento per entrambe le scale scelte) e che l'intercetta sia 0 (coincidenza degli zeri, i due sistemi non sono sciftati e ho quindi un semplice riscalamento) (non vedo un perchè esplicito di questa decisione) infine il coefficiente angolare rappresenterà il fattore di conversione da una udm all'altra.

### Energia delle particelle

Partendo dal link nel pdf di giacomo (sito che non esiste) ni sono ritrovato in questo sito qui 

http://www.lnhb.fr/home/nuclear-data/

dove in grassetto si nota subito DDEP che è il robo nominato dai prof nelle slide

http://www.lnhb.fr/home/conferences-publications/ddep_wg/

in questa pagina, aprendo introduction otteniamo il seguente pdf

http://www.lnhb.fr/pdf/Introduction_2011.pdf

che ci da informazioni su come interpretare le robe che vengono scritte

premendo invece su recomended data otteniamo il seguente

http://www.lnhb.fr/accueil/donnees-nucleaires/donnees-nucleaires-tableau/

da cui possiamo selezionare gli elementi

- Selezionando l'Americio 241 otteniamo 

http://www.lnhb.fr/nuclides/Am-241_tables.pdf

alla pagina 7 abbiamo la tabella per le emissioni alpha. e per non sapere ne leggere e ne scrivere ho selezionato quella che ripostava il valore della terza colonne, ovvero probabilità, maggiore

otteniamo quindi un valore di 

(keV) 5485.56 \pm 12  (84% probabilità)

- Selezioniamo  il nettunio 237

http://www.lnhb.fr/nuclides/Np-237_tables.pdf

alla pagiona 4 abbiamo la tabella per le emissioni alpha e con le stesse considerazioni dette sopra prendiamo il seguente valore di 

(keV) 4788.0 \pm 9 (47.6% probabilità) 

- Selezioniamo il curio 244 

http://www.lnhb.fr/nuclides/Cm-244_tables.pdf

alla pagina 3 abbiamo la tabella per le emissioni di tipo alpha e con le stesse considerazioni dei punti precedenti otteniamo il valore di 

(keV) 5804.77 \pm 0.05 (76.7% probabilità)

(tutti i valori coincidono con quelli riportati nella tabella nel pdf di giacomo)

Da queste considerazioni possiamo dire che 

- il picco inferiore  ->  nettunio
- il picco medio      ->  americio
- il picco superiore  ->  curio

(e ancora una volta coincide con i valori riportati nel pdf di giacomo)

Dato che adesso abbiamo dato un nome ai picchi, nel resto delle analisi verrà utilizzato il nome dell'elemento invece della posizione del picco

