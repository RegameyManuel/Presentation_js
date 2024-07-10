Voici une description textuelle d'un schéma représentant le DOM (Document Object Model) et la manière dont JavaScript le manipule.

### Description du Schéma

1. **HTML Structure**:
    - La structure de base d'un document HTML est hiérarchique, avec des éléments imbriqués les uns dans les autres.
    - Par exemple:
      ```html
      <html>
        <head>
          <title>Page Title</title>
        </head>
        <body>
          <h1>Heading</h1>
          <p>Paragraph</p>
        </body>
      </html>
      ```

2. **DOM Representation**:
    - Le DOM représente cette structure sous forme d'un arbre, avec chaque élément HTML correspondant à un nœud.
    - Le nœud racine est le `<html>` et il a deux enfants principaux : `<head>` et `<body>`.
    - `<body>` contient à son tour les nœuds `<h1>` et `<p>`.

3. **JavaScript Manipulation**:
    - JavaScript peut accéder et manipuler ces nœuds en utilisant l'API DOM.
    - Par exemple, pour changer le contenu du `<h1>`, on peut utiliser:
      ```javascript
      document.querySelector('h1').textContent = 'New Heading';
      ```
    - Pour ajouter un nouvel élément `<p>` dans le `<body>`:
      ```javascript
      var newParagraph = document.createElement('p');
      newParagraph.textContent = 'New Paragraph';
      document.body.appendChild(newParagraph);
      ```

### Illustration

```plaintext
      +------------------------------------------------------+
      |                      Document                        |
      +---------------------------+--------------------------+
                                  |
      +---------------------------|--------------------------+
      |                           |                          |
    <html>                     <head>                     <body>
      |                           |                          |
+-----|-----+               +-----|-----+              +-----|-----+
|           |               |           |              |           |
<title>   <body>           <title>     <style>        <h1>       <p>
"Title"  "Body"           "Title"     "Style"       "Heading" "Paragraph"
```

### Explications des manipulations JavaScript :

1. **Changer le contenu du `<h1>`**:
    ```javascript
    document.querySelector('h1').textContent = 'New Heading';
    ```
    - `document` : l'objet global représentant le document HTML.
    - `querySelector('h1')` : sélectionne le premier élément `<h1>`.
    - `textContent = 'New Heading'` : change le texte de l'élément sélectionné.

2. **Ajouter un nouvel élément `<p>`**:
    ```javascript
    var newParagraph = document.createElement('p');
    newParagraph.textContent = 'New Paragraph';
    document.body.appendChild(newParagraph);
    ```
    - `createElement('p')` : crée un nouvel élément `<p>`.
    - `textContent = 'New Paragraph'` : définit le texte de ce nouvel élément.
    - `appendChild(newParagraph)` : ajoute ce nouvel élément comme enfant de `<body>`.

Ce schéma et ces explications montrent comment JavaScript interagit avec le DOM pour manipuler la structure et le contenu d'un document HTML. 
Vous pouvez utiliser ce concept pour comprendre comment vos scripts JavaScript modifient dynamiquement les pages web.
