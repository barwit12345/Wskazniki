int *funky (*wska,*wskb)
{
	if (wska>wskb) return wska; //Brak gwiazdki "podnosi" o poziom złożenia do adresu w pamięci
	else return wskb;
}
