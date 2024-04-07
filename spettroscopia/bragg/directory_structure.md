[Back to home](readme.md)

----

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

	........

- *root_analisi_1*

	contiene i file .root prodotti dopo il run di AnaBragg.C e le varie analisi svolte sui dati raccolti

	- fit integrale
	- fit vmax

	per i due punti precedenti sottolineo come l'errore inserito nel grafico per il valore medio della gaussiana fittata è quello fornito da root, non ho svolto ricerche su come vada interpretato, questo significa che se root mi da sia un risultato per il fit di media e sigma, come errore della media prendo quello sulla riga della media (vedere file contenente i risultati di fit)

	inoltre da qui in poi il 650mb a th14 viene scartato dato che in basso è presente un rumore elevato e le analisi vengono svolte solo per i th15

	- riconoscimento delle particelle (il discorso teorico si trova sotto)

	- fit width

- *root_analisi_2*

- *test_preliminari*

	contiene tutto, dai dati grezzi ai grafici per la presa dati da 500 eventi, utilizzata per la verifica preliminare del corretto funzionamento dello strumento