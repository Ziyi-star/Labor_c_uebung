/*Implementieren Sie ein Programm, in welchem Sie zwei char-Variablen einlesen. Diese sind bekanntlich
jeweils 8 Bit groß. Bitte speichern Sie beide Zeichen nun in einer einzigen short-Variable (die
bekanntlich 16 Bit groß ist). Nutzen Sie Bitoperationen, um beide char-Variablen in der short-
Variable „unterzubringen“. Geben Sie dann die beiden eingelesenen Zeichen wieder aus – und zwar
nutzen Sie zur Ausgabe nicht die beiden Variablen, in die Sie die Zeichen eingelesen haben, sondern
wieder die short-Variable. Nutzen Sie also auch zur Ausgabe wieder Bitoperationen.*/

int main()
{
    char zeichen1, zeichen2;
    short zeichenkette;
    printf("Bitte geben Sie zwei durch Leerzeichen getrennte Zeichen ein: ");
    scanf("%c %c", &zeichen1, &zeichen2);
    zeichenkette = zeichen1;
    zeichenkette = zeichenkette << 8;
    zeichenkette = zeichenkette | zeichen2;
    printf("\nSie haben eingegeben: %c%c\n", zeichenkette >> 8, zeichenkette);

    return 0;
}