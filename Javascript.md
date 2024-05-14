##  **JAVASCRIPT**

    JavaScript est un langage de programmation dynamique et puissant, essentiel pour le développement web. Il permet de créer des interactions complexes, des animations, et de gérer la communication avec les serveurs, rendant ainsi les pages web interactives et fonctionnelles.

    L'histoire de JavaScript commence en 1995, lorsque Brendan Eich le développe en seulement dix jours alors qu’il travaille pour Netscape Communications. Initialement créé sous le nom de Mocha, puis renommé en LiveScript, et finalement en JavaScript, ce langage a été conçu pour permettre aux développeurs web de programmer plus facilement des interactions côté client. Rapidement, JavaScript a été adopté par tous les navigateurs principaux, formant la base de la dynamique web moderne.

    En 1997, JavaScript est standardisé par l'ECMA (European Computer Manufacturers Association) sous le nom d'ECMAScript pour assurer la compatibilité entre les différentes implémentations du langage. Depuis lors, ECMAScript a évolué à travers plusieurs éditions, apportant de nouvelles fonctionnalités et améliorations, ce qui a permis à JavaScript de rester à la pointe des technologies de développement front-end. De plus, avec l'introduction de Node.js en 2009, JavaScript a également pris d'assaut le développement côté serveur, prouvant sa polyvalence et sa puissance. Aujourd'hui, JavaScript est incontournable dans le développement de sites web et d'applications mobiles, jouant un rôle central dans l'expérience utilisateur sur le web.

### 1. **Variables**
JavaScript utilise des variables pour stocker des données. Les variables peuvent être déclarées avec `var`, `let` ou `const`.

- `var` : Déclaration traditionnelle, portée fonctionnelle.
- `let` : Déclaration moderne, portée de bloc.
- `const` : Similaire à `let`, mais pour des valeurs qui ne doivent pas être réassignées.

```javascript
var nom = "Pierre";   // Variable traditionnelle
let age = 25;         // Variable à portée de bloc
const PI = 3.14;      // Constante
```

### 2. **Types de Données**
JavaScript est un langage à typage faible et dynamique. Voici les types de données les plus courants :

- **Primitifs** : `string`, `number`, `boolean`, `undefined`, `null`, `symbol`, `bigint`
- **Objets** : y compris les tableaux, fonctions, objets

```javascript
let nom = "Pierre";       // String
let age = 25;             // Number
let estActif = true;      // Boolean
let adresse = null;       // Null
let x;                    // Undefined
```

### 3. **Opérateurs**
JavaScript comprend des opérateurs arithmétiques, de comparaison, logiques, et plus.

- **Arithmétiques** : `+`, `-`, `*`, `/`, `%`
- **Comparaison** : `==`, `===`, `!=`, `!==`, `>`, `<`, `>=`, `<=`
- **Logiques** : `&&`, `||`, `!`

```javascript
let resultat = 10 + 5;        // 15
let egal = (resultat === 15);  // true (comparaison de type et de valeur)
let nonEgal = (10 != "10");    // false (comparaison de valeur seulement)
```

### 4. **Structures de Contrôle**
JavaScript utilise des structures conditionnelles et des boucles pour contrôler le flux d'exécution.

- **Conditionnelles** : `if`, `else`, `switch`
- **Boucles** : `for`, `while`, `do...while`, `for...of`, `for...in`

```javascript
if (age > 18) {
    console.log("Adulte");
} else {
    console.log("Mineur");
}

for (let i = 0; i < 5; i++) {
    console.log(i);
}
```

### 5. **Fonctions**
Les fonctions sont des blocs de code réutilisables. Elles peuvent être déclarées ou exprimées.

```javascript
function saluer() {
    console.log("Bonjour !");
}

const additionner = function(x, y) {
    return x + y;
};

const multiplier = (x, y) => x * y;  // Fonction fléchée
```

### 6. **Gestion des Événements**
JavaScript est souvent utilisé pour ajouter de l'interactivité aux pages web par la gestion des événements.

```javascript
document.getElementById("monBouton").addEventListener("click", function() {
    alert("Bouton cliqué !");
});
```

### 7. **Manipulation du DOM**
JavaScript peut manipuler le Document Object Model (DOM) pour modifier la structure, le style et le contenu des pages web.

```javascript
let titre = document.getElementById("titre");
titre.innerHTML = "Nouveau Titre";
titre.style.color = "red";
```

Cette introduction couvre les bases de la syntaxe et des structures essentielles en JavaScript. Avec ces outils, vous pouvez commencer à écrire des scripts simples et progresser vers des applications plus complexes.