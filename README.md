# Amazed — Résolution de labyrinth (graphe) pour robots

## Description
**amazed** est un projet de résolution de labyrinthe sous forme de **graphe** : le programme lit une liste de **salles** (nodes) reliées par des **tunnels** (edges), détecte une salle de départ (`##start`) et une salle d’arrivée (`##end`), puis calcule un **chemin valide** (ici via **BFS**) pour permettre à des robots d’atteindre la sortie.

Le programme peut ensuite afficher le chemin trouvé et/ou simuler le déplacement des robots dans le graphe.

## Fonctionnalités
- Lecture/parsing d’une carte au format “salles + liens”
- Détection de `##start` et `##end`
- Vérifications (doublons, liens invalides, start/end manquants, etc.)
- Recherche de chemin **BFS**
- Affichage du résultat (chemin, ou étapes de déplacement)

## Format d’entrée (carte)
La carte est composée de 3 parties :

### 1) Nombre de robots
Première ligne : un entier `N`.

Exemple :
```text
5
```

### 2) Salles (rooms)
Une salle est décrite par :
```text
<id> <x> <y>
```

Les lignes spéciales :
- `##start` : la salle définie juste après est le départ
- `##end` : la salle définie juste après est l’arrivée

Exemple :
```text
##start
0 1 0
##end
1 13 0
2 5 0
3 9 0
```

### 3) Liens (tunnels)
Un lien est décrit par :
```text
<id1>-<id2>
```

Exemple :
```text
0-2
2-3
3-1
```

## Exemple complet
```text
5
##start
0 1 0
##end
1 13 0
2 5 0
3 9 0
0-2
2-3
3-1
```

Chemin possible (BFS) :
`0 -> 2 -> 3 -> 1`

## Compilation
```bash
make
```

## Exécution
> Adapte le nom du binaire selon ton projet.

```bash
./amazed < labyrinth
# ou
./amazed labyrinth
```

## Auteurs
- [Ugo-Pas](https://github.com/Ugo-Pas)
- [Tadomika-Ari](https://github.com/Tadomika-Ari)
- [Pekkatrol](https://github.com/Pekkatrol)


## Licence
Projet scolaire Epitech — à usage pédagogique.
