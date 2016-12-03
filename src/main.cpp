#include <iostream>
#include <libguile.h>

#include "File.h"

using namespace std;

void inner_main(void* data, int argc, char** argv)
{
  // scm_c_define_gsubr("my-hostname", 0, 0, 0, my_hostname); // exemple
  scm_shell(argc, argv);
}

int main(int argc, char**argv)
{
	cout << "Démarrage du programme." << endl;
	Dagal::File fichier;
	scm_boot_guile(argc,argv, inner_main, 0); // Ne quitte jamais...
	return 0; // Impossible d'arriver ici
}

