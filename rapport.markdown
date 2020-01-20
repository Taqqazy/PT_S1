# Projet tutoré - Rapport
#### Baptiste MASOUD et Louis LECARDONNEL

## Comment utiliser notre logiciel ?

Nous avons choisi de développer notre projet sans passer par des paramètres en ligne de commande à l’exécution de celui-ci.

En effet, l'utilisateur devra choisir au démarrage du programme entre le mode Personnel et le mode Entreprise, en rentrant respectivement les nombres 0 ou 1.

### Le mode Personnel

Le mode Personnel de notre programme affichera 
dans un fichier HTML (avec son fichier style CSS également généré) le personnel (c'est-à-dire le nom, prénom, statut et photo de profil des employés) de toutes les entreprises cumulées classé par ordre alphabétique.

### Le mode Entreprise

Le deuxième mode de notre programme est le mode Entreprise.

Celui-ci reprendra le même format que le mode Personnel, tout en réunissant cette fois premièrement le Personnel par Entreprise, en donnant le logo de l'entreprise correspondante.

## Les tests exécutés

Le fait de ne pas utiliser de paramètre en ligne de commande dans notre programme réduit grandement le nombre d'erreurs.

#### Fichiers vides :

Dans le cas de fichiers vides (Entreprise.csv ou Perso.csv), le programme retournera un message et un code d'erreur correspondant.

#### Fichiers manquants :

Dans le cas de fichiers manquants, le programme retournera un message et un code d'erreur correspondant.

#### Choix rentré différent de 0 ou 1 :

Au moment de choisir le mode de notre programme, si le caractère rentré par l'utilisateur est différent de 0 ou 1, le programme redemandera à l'utilisateur de saisir 0 ou 1, en boucle tant que l'entrée n'est pas valide.

Une fois que l'utilisateur a rentré une valeur valide, la chaîne de caractère est convertie en entier grâce à la fonction stoi qui est ensuite donnée comme valeur au booléen mode.

## Compte-rendu des réunions

Nous nous sommes rencontrés plusieurs fois au cours de séances encadrées par l'IUT, mais aussi en dehors de ces séances pour mettre au point notre programme. La répartition des tâches a été plutôt équitable.

Baptiste s'est occupé de la fonction main(), misc() ainsi que de la classe Personnel, tandis que je me suis plutôt occupé de la fonction htmlSyntaxe(), makeCss() et de la classe Entreprise.

Nous avons réparti les tâches mais nous faisions souvent le travail en commun pour se mettre d'accord, donc notre participation a été globale à tous les deux.

## Méthode de communication et de partages

Pour mettre en commun notre travail, nous avons chacun de nous mis en place le logiciel Atom comme environnement de travail, accompagné par un repository GitHub pour pouvoir stocker, mettre à jour et partager notre travail.