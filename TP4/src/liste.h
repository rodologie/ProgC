struct couleur
{
    int R;
    int G;
    int B;
    float A;
};

struct liste_couleurs
{
    struct couleur c;
    struct liste_couleurs *c_suivant;
};

void insertion(struct couleur *coul_ajout, struct liste_couleurs *precedant_ptr);
void parcours(struct liste_couleurs *couleur);