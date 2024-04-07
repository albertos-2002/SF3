### La sezione seguente è una discussione sul calcolo del range delle tre particelle alpha e sulla width

---

Assunzioni che sono state fare per procedere con l'analisi:

- [1] Width, definita come la larghezza al 30% dell'altezza dei una curva di bragg, rappresenta una larghezza temporale del segnale

	Il quanto questo possa essere sensato rimane un mistero assoluto

- [2] Sampling time (riportato nelle slide di spiegazione e pari a 80 ns/a.u.) lo definiamo come la distanza temporale data dalla variazione di una singola tacca (la minima possibile) nell'asse delle ascisse del plot signals

- [3] L'assunzione cardine di questa analisi è che la particella alpha prodotta dall'americio a 350mb sia quella che possiede un range pari alla lunghezza della camera (117mm), e che sia l'unico picco ben visivile nel relativo histogramma

- [4] La velocità di drift è costante per tutte e tre le particelle e per tutte le pressioni

I prof, per determinare la roba che dobbiamo usare per il calcolo della velocità di drift, dicono di adoperare i grafici bidimensionali di vmax-integral, vmax-width, width-integral

Come interpretarli e che informazioni forniscono è la cosa complicata da capire

Ci siamo affidati maggiormente al pdf di gicomo nel quale i tizi fanno una discussione sulle particelle che esconodo dalla camera e a quali pressione, e di quelle che la percorrono per intero, quella discussione è quella che ha portato a mettere come ipotesi arbitraria la [3]

---

### Velocità di drift e range

La velocità di drift è stata calcolata nel seguente modo

```math
v_{drift} = spazio / tempo
```

se poniamo per la pressione 350mb che, come detto, il picco maggiore sia quello dell americio e che percorra esattamente la lunghezza della camera allora: 

spazio = r = 117 mm

e il tempo possiamo ricavarlo come

```math
tempo = sampling_time * width_{americio_350mb}
```

La velocità di drift calcolata in questo modo, come detto, la consideriamo una costante per tutte le particelle a tutte le pressioni

```math
v_{drift} = r / (sampling_time * width_{americio_350mb})
```

Quindi i range per le atre particelle è stato calcolato come

```math
range_i = v_{drift} * tempo_i
        = v_{drift} * (width_i * sampling_time)
        = r * (width_i * sampling_time) / (sampling_time * width_{americio_350mb})
```

A livello di codice è stato utilizzato è stato utilizzato

r = v_{drift} * sampling_time * width_i

in modo da ridurre il numero di calcoli che si ripetono

Gli errori sono stati propagati con le classiche formule alla doro

Sono state fatte alcune conversioni di udm


Se la posizione del picco (della curva di Bragg) dipende dall'energia allora la disposizione dei range è come quella delle energie, ovvero il curio ha il range maggio e il nettunio il minore, con l'americio nel mezzo


I fit dei picchi degli histogrammi della width sono stati fatti particolarmente ad occhio tentando di centretrarli

i valori usati sono i seguenti 

.......| 450 | 500 | 550 | 600 |

Np |  46  |  43  |  41  |  38  |

Am |  56  |  52  |  49  |  47  | 

Cm |  61  |  56  |  53  |  50.5  |

---

### Legge di BraggKleeman

Sono stati printati i grafici del range in funzione della pressione e fittati per vedere se seguono un andamento di tipo iperbolico, questo deriva dal fatto che se si prende la legge di BraggKleeman e si esprime da essa Range(densità) si ottiene un andamento del tipo y = 1/x

Le formule complete solo nelle slide di teoria (non viene riportata perchè è una semplice formula girata)

si è deciso (non so perchè) di fittare y = (1/x) + C
