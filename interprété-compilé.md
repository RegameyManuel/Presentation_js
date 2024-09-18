Un **langage compilé** et un **langage interprété** se distinguent principalement par la manière dont le code est exécuté par l’ordinateur.

### Langage compilé (exemple : C)

1. **Compilation préalable** : Le code source écrit dans un langage compilé, comme le C, est converti par un programme appelé **compilateur** en un fichier binaire, souvent appelé **code machine** ou **exécutable**. Ce fichier est directement compréhensible par le processeur de l'ordinateur.

2. **Étapes de compilation** : Le compilateur analyse et traduit tout le programme avant son exécution. Si le programme contient des erreurs, elles sont signalées lors de la compilation, avant même que le programme ne soit lancé. Une fois compilé, le programme peut être exécuté directement, sans besoin de compiler à nouveau (sauf en cas de modification du code source).

3. **Performance** : Les langages compilés sont généralement plus rapides que les langages interprétés, car le code est déjà converti en instructions machine optimisées pour l'architecture de l'ordinateur. Cela réduit le temps d'exécution, surtout pour les opérations complexes.

4. **Portabilité** : Un exécutable compilé est généralement spécifique à une architecture matérielle (par exemple, un programme compilé pour Windows sur un processeur Intel ne fonctionnera pas directement sur Linux ou sur un processeur ARM).

**Exemple avec C** :
   - Le programmeur écrit du code source en C.
   - Il utilise un compilateur (comme GCC) pour transformer ce code en un exécutable (par exemple, `a.out` sur Linux).
   - L'exécutable peut ensuite être directement exécuté sur la machine sans autre étape.

### Langage interprété (exemple : JavaScript)

1. **Interprétation en temps réel** : Dans un langage interprété comme JavaScript, le code source n'est pas converti à l'avance en code machine. Au lieu de cela, un programme appelé **interpréteur** lit et exécute directement le code source ligne par ligne à chaque exécution. Par exemple, dans un navigateur web, c'est le moteur JavaScript qui interprète le code JavaScript et le transforme en instructions que le processeur peut comprendre.

2. **Exécution ligne par ligne** : L'interpréteur traduit le code au fur et à mesure de son exécution, ce qui peut entraîner une exécution plus lente par rapport aux langages compilés. Chaque ligne de code est traduite en instructions machine à la volée, ce qui prend plus de temps que l'exécution d'un programme déjà compilé.

3. **Souplesse** : Un avantage des langages interprétés est leur souplesse. Par exemple, vous pouvez modifier un fichier JavaScript et l'exécuter directement dans un navigateur sans avoir besoin de passer par une étape de compilation. Cela rend ces langages très adaptés pour des scénarios de développement rapide ou pour des environnements comme les pages web interactives.

4. **Portabilité** : Le code source d'un langage interprété est plus facilement portable d'un environnement à un autre, tant que l'interpréteur approprié est disponible. Par exemple, JavaScript peut être exécuté dans presque tous les navigateurs modernes, quel que soit le système d'exploitation ou l'architecture matérielle sous-jacente.

**Exemple avec JavaScript** :
   - Le développeur écrit du code source en JavaScript.
   - Ce code est interprété par le moteur JavaScript du navigateur (comme V8 pour Chrome ou SpiderMonkey pour Firefox) à chaque fois que la page est chargée.
   - Le navigateur interprète et exécute le code directement, sans étape intermédiaire de compilation.

### Différences clés entre C et JavaScript :
| **Caractéristique**           | **C (Langage compilé)**                     | **JavaScript (Langage interprété)**        |
|-------------------------------|---------------------------------------------|--------------------------------------------|
| **Exécution**                 | Compilé avant l'exécution                   | Interprété ligne par ligne à l'exécution   |
| **Performance**               | Généralement plus rapide                    | Généralement plus lent                     |
| **Dépannage**                 | Les erreurs sont trouvées à la compilation  | Les erreurs sont détectées à l'exécution   |
| **Portabilité**               | Exécutable spécifique à l'architecture      | Code source portable via interpréteurs     |
| **Modifications rapides**     | Requiert une recompilation                  | Pas de recompilation nécessaire            |

### Conclusion :
Les langages compilés, comme le C, offrent des performances élevées et une exécution rapide mais nécessitent une étape de compilation préalable, tandis que les langages interprétés, comme JavaScript, permettent un développement plus souple et rapide, au détriment de la vitesse d’exécution. Le choix entre les deux types de langages dépend du contexte et des besoins spécifiques du projet.