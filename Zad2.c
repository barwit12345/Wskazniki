int *funk (int *wska, *wskb) //Funkcja będzie wskazywać na wskaźnik większej
{							 //W rezultacie operacje na *funk zmienią wskazywane
	if (*wska>*wskb) return wska;
	else return wskb;
}
