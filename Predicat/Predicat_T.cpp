#include "Predicat_T.hpp"

bool TestVoyelles::operator()(string const& chaine) const
    {
        for(int i(0); i<chaine.size(); ++i)
        {
            switch (chaine[i])   //On teste les lettres une à une
            {
                case 'a':        //Si c'est une voyelle
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'y':
                    return true;  //On renvoie 'true'
                default:
                    break;        //Sinon, on continue
            }
        }
        return false;   //Si on arrive là, c'est qu'il n'y avait pas de  voyelle du tout
    }