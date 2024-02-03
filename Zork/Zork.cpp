#include <iostream>
#include <fstream>

using namespace std;

ofstream in("date.txt");

struct Erou
{
    char Nume[20];
    int hp, bani;
};

Erou p;

int main()
{
    
    p.bani = 0;
    p.hp = 100;
    cout << "Alege un nume pentru jucatorul tau: "; cin >> p.Nume;
    in << p.Nume;
    cout << "Tanarul " << p.Nume << " doarme sub umbra unui copac, fara sa stie ca ce va urma ar putea fi una dintre cea mai frumoasa aventura din viata lui.\nAcesta se trezeste si isi aminteste de un vis pe care l-a avut. " << p.Nume << " se afla langa o cladire foarte mare in forma de triunghi, langa care se afla o comoara imensa plina ochi de aur.\n Acesta se duce sa ia comoara, iar cand este fix in fata ei acesta se trezeste.\nAcesta nestiind ce sa faca se gandeste sa vada o clar vazatoare.";
    cout << "Apasa w pentru a merge la clarvazatoare sau apasa s pentru a te pune inapoi la somn: ";
    char raspuns;
    cin >> raspuns;
    if (raspuns == 'w')
    {
        cout << "Ai considerat visul destul de important asa ca te-ai dus la coliba clarvazatoarei. Aceasta te intreaba ce poate sa faca pentru tine\n";
        cout << "Alegi sa ii spui visul(w) sau sa faci o gluma rasista(s)? ";
        cin >> raspuns;
        if (raspuns == 'w')
        {
            cout << "Clarvazatoarea se schimba la fata si te pune sa juri ca daca vei gasi comoara tu sa ii dai o treime din ea.\n";
            cout << "Alegi sa ii juri(w) sau sa faci o gluma rasista si sa pleci(s)? ";
            cin >> raspuns;
            if (raspuns == 'w')
            {
                cout << "Interbi clarvazatoarea ce este asa de important cu visul tau, dar aceasta iti spune ca trebuie sa pleci altfel te va pune sa platesti mai mult.\n";
                cout << "Faci o gluma rasista si pleci din coliba";
                cout << endl << "Trist te asezi pe o banca ca sa stai sa te gandesti, dar un batran se pune langa tine si te intreaba de ce esti asa de trist.\n";
                cout << "Alegi sa vorbesti cu el(w) sau sa pleci pe alta banca(s)? ";
                cin >> raspuns;
                if (raspuns == 's')
                {
                    cout << endl << "Din pacate ai ales sa parcurgi povestea, ti-am oferit o gramada de moduri prin care sa iesi, dar nu ai facut-o";
                    cout << endl << "Va trebui sa il asculti pe batran";
                }
                cout << "Ii spui batranului de ce esti trist, iar acesta iti spune o poveste plictisitoare care nu avea deloc legatura cu subiectul.\n";
                cout << "Intrebi batranul ce a fost cu povestea asta, iar acesta iti spune ca trebuie sa asculti ce ti-a spus visul si ca va trebui sa te iei dupa semnele pe care ti le-a aratat.\n";
                cout << "Asa ca ,motivat de catre acel mos, te duci intr-o aventura pentru a gasi acea comoara.\n";
                cout << "Dupa ore de mers ajungi intr-o padure unde gasesti un lup flamand care vrea sa te atace.\n";
                cout << "Langa tine observi un cutit.\n";
                cout << "Alegi sa iei cutitul ca sa te aperi(s) sau ai increderer in fortele tale proprii(w)? ";
                cin >> raspuns;
                    if (raspuns == 'w')
                        cout << "Lupul te-a atacat, iar tu nu ai avut nicio sansa impotriva lui. Ai fost sfasaiat de viu si lasat jos sa mori.";
                    else
                    {
                        cout << "Ai reusit sa invingi lupul si i-ai luat carnea pe care ai mancat-o si blana cu care ti-ai facut o haina foarte calduroasa.\n";
                        cout << "S-a facut intuneric, poti sa te culci(w) sau sa continui sa mergi prin padure(s).\n";
                        cin >> raspuns;
                        if (raspuns == 'w')
                        {
                            cout << "Te-ai decis sa te culci, dar nu ai unde. Ai putea incerca sa dormi pe jos(w) si sa speri sa nu vina nimeni la tine in timp ce dormi\n";
                            cout << "sau ai putea sa incerci sa iti folosesti abilitatile de supravietuire si sa contruiesti un cort(s) sau ai putea sa cauti un loc sa dormi(x) si sa nu te mai complici atata.\n";
                            cin >> raspuns;
                            if (raspuns == 'w')
                            {
                                cout << "Familia lupului pe care l-ai ucis a venit sa isi razbune fratele, tocmai ai fost sfasaiat de viu?";
                            }
                            else if(raspuns == 'x')
                            {
                                cout << "Ai gasit o pestera care parea destul de potrivita si sigura pentru a dormi in ea, dar cand sa te duci in pestera un urs gigantic a venit si ta sfasaiat de viu.\n";
                            }
                            else
                            {
                                cout << "Ai construi un cort extraordinar doar din frunze si bete.\n";
                                cout << "La iesirea din padure vezi un om care cara o traista plina cu lucruri de valoare.";
                                cout << "Acesta te intreaba daca vrei sa cumperi o sabie de lemn de la el. Ce zici(w-da , s-nu)";
                                cin >> raspuns;
                                if (raspuns == 'w')
                                {
                                    cout << "Ai cumparat o sabie de lemn care probabil ca nu o sa te ajute.";
                                    cout << endl << "Ce pierdere de bani.";
                                }
                                else if (raspuns == 's')
                                {
                                    cout << "Ai ales varianta corecta, cine este atat de fraier sa cumpere o sabie din lemn.\n";
                                }
                                cout << "Pana acum ai trecut printr-o padure in care te-ai luptat cu un lup, ai facut un cort ca sa nu mori de frig, dar cu ce scop\n";
                                cout << "AAAAAAA, sa gasesti acea comoara, dar nici macar nu stii unde trebuie mergi, tot ce stii este ca trebuie sa cauti o cladire in forma de triunghi.\n";
                                cout << "Norocul tau este ca ai dat de acel negustor care dintr-un orecare motiv stie unde trebuie sa mergi, ce tare!\n";
                                cout << "Acesta iti spune ca acele cladiri in forma de triunghi se numesc piramide si se afla intr-un taram mistic numit Pandora.\n";
                                cout << "Oops, ala era alt film.\n";
                                cout << "AAAAAhhhh, am uitat ce a zis negustorul, trebuie sa il intrebam inca odata.\n";
                                cout << "Ok, negustorul ti-a spus ca trebuie sa mergi in Egipt.";
                                cout << "Acesta ti-a spus ca poate sa te duca la intrare in Egipt, dar de acolo va trebui sa mergi singur.\n";
                                cout << "Alegi sa mergi cu negustorul(w) sau sa incerci sa mergi singur(x)?";
                                cin >> raspuns;
                                if (raspuns == 'x')
                                {
                                    cout << "Ai ales sa mergi singur, ce tare!\n";
                                    cout <<endl<<"Tocmai ai facut povestea mai lunga si ma pui pe mine sa scriu mai mult";
                                    cout << endl<<"Stii ce, nu o sa scriu si o sa mergi automat cu negustorul, lenesule!";
                                }
                                else
                                {
                                    cout <<endl<<"Negustorul te-a dus pana la intrare in Egipt";
                                }
                                cout << endl << "Acesta te pune sa il platesti pentru ca l-ai pus sa te aduca pana aici, trebuia sa mergi singur!";
                                    cout <<endl<< "Alegi sa il platesti(w) cu " << p.bani << " lei sau sa il omori(s) cu cutitul tau";
                                    cin >> raspuns;
                                    if (raspuns == 'w')
                                    {
                                        cout << "Ai ales sa il platesti pe negustor.\n";
                                        cout << "Din pacate nu ai destui bani.";
                                        cout << endl << "Negustorul te-a omorat pentru ca nu ai avut destui bani.\n";
                                    }
                                    else
                                    {
                                        cout << "Ai omorat negustorul si ai luat tot ce avea. Fair trade I guess.\n";
                                        p.bani = 10000;
                                        cout << "Acum ca esti in Egipt trebuie sa afli mai exact unde trebuie sa mergi ca sa gasesti piramida.";
                                        cout << endl << "Te indrepti catre un bar unde speri sa gasesti pe cineva care stie unde sunt piramidele";
                                        cout << endl << "In bar sunt o gramada de oameni cu sabii lungi sa ascutite, iar la tejghea este o vanzatoare foarte draguta de care crezi ca iti place.";
                                        cout << endl << "Alegi sa vorbesti cu barbatii(s) cu sabii sau cu vanzatoarea draguta(x)?";
                                        cin >> raspuns;
                                        if (raspuns == 'x')
                                        {
                                            cout << endl << "Vanzatoarea draguta iti spune ca ea nu stie unde sa te duca, dar iti spune ca tatal ei care este barbatul cu barba si cu sabia de la masa stie";
                                        }
                                        if (raspuns == 's')
                                        {
                                            cout << endl << "Ai ales sa fii un barbat si sa mergi la barbatii cu sabii si sa vorbesti cu ei";
                                        }
                                            cout << endl << "Te duci la masa si le spui povestea ta, iar acestia au spus ca daca vrei pot sa te duca exact unde ai nevoie, dar va trebui sa ii platesti cu toti banii pe care ii ai.";
                                            cout << endl << "Ii platesti cu banii pe care i-ai luat de la negustor, iar acestia de aduc exact in fata acelei cladiri in forma de triunghi din visul tau";
                                            cout << endl << "Acestia iti dau o lopata cu care sa sapi si te apuci sa cauti comoara, dar nu o gasesti.";
                                            cout << endl << "Barbatii cu sabii isi pierd rabdarea si te intreaba unde este comoara, iar tu le spui ca nu este aici.";
                                            cout << endl << "Unul dintre egipteni care parea liderul grupului le spune oamenilor sai sa te omoare si sa iti fure toti banii.";
                                            cout <<endl << "Trebuie sa faci ceva!";
                                            cout << endl << "Scoti cutitul(s) sa te aperi sau incerci sabia de lemn(w)?";
                                            cin >> raspuns;
                                            if (raspuns == 's')
                                            {
                                                cout << endl << "Te lupti cu ei si reusesti sa invingi unul ditre ei.";
                                                cout << endl << "Dar mai sunt doi oameni care vin catre tine chiar acum.";
                                                cout << endl << "Trebuie sa te feresti(w) sau sa blochezi una dintre lovituri.";
                                                cin >> raspuns;
                                                if (raspuns == 'w')
                                                {
                                                    cout << endl << "Te-ai ferit de ei, ceea ce iti ofera o deschidere sa ataci.";
                                                    cout << endl << "Ai sarit pe unul dintre oameni si l-ai omorat.";
                                                }
                                                else
                                                {
                                                    cout << endl << "Ai blocat o lovitura in timp ce celalalt egiptean te-a lovit cu sabia.";
                                                    cout << endl << "Totusi reusesti sa invingi pe unul dintre ei.";
                                                }
                                            }
                                            if (raspuns == 'w')
                                            {
                                                cout << endl << "Aparent sabia de lemn de la negustor avea puteri magice si ai reusit sa ii invingi toti egiptenii infara de lider.";
                                            }
                                                cout << endl << "Ultimul egiptean vine si fara sa iti dai seama esti la pamant, iar arma este prea departe de tine.";
                                                cout << endl << "VREA SA TE INJUNGHIE, FA CEVAAAA!!!!!";
                                                cout << endl << "Foloseste altceva(w) sau fereste-te si fugi catre arma pe care ai scapat-o(x).";
                                                cin >> raspuns;
                                                if (raspuns == 'x')
                                                {
                                                    cout << endl << "Chiar ai crezut ca poti sa te feresti.";
                                                    cout << endl << "Ai murit";
                                                }
                                                if (raspuns == 'w')
                                                {
                                                    cout << endl << "Ai scos un cutit pe care l-ai luat de la negustor, ceea ce l-a surprins pe egiptean.";
                                                    cout << endl << "Acesta s-a ferit de tine, cam skill issue daca ma intrebi pe mine.";
                                                    cout << endl << "Egipteanul a ramas surprins si ti-a zis ca tu nu meriti sa fi omorat.";
                                                    cout << endl << "Ca o fetita mica ce esti ai inceput sa plangi, pentru ca nu ai gasit comoara si ai renuntat la tot ce aveai ca sa o gasesti.";
                                                    cout << endl << "Egipteanu cu barba iti spune sa si ele a avut un vis de genul, dar nu a gasit comoara.";
                                                    cout << endl << "Acesta iti spune ca el trebuia sa mearga la un copac mare si sa caute sub radacina sa.";
                                                    cout << endl << "Spusele batranului iti amintesc de copacul sub care ai dormit inainte sa pleci in aventura.";
                                                    cout << endl << "Iti dai seama ca s-ar putea sa fi cautat in locul gresit tot timpul acesta, iar comoara era exact sub nasul tau.";
                                                    cout << endl << "Te intorci la acel copa si te pui sa sapi dupa comoara.";
                                                    cout << endl << "Gasesti o cutie incredibil de mare si de grea, pe care o deschizi si vezi ca este plina cu aur si diamante.";
                                                    cout << endl << "In viata datoria fiecarui om este de a-si descoperii Legenda Personala, asa cum a facut si " << p.Nume << ".";
                                                    cout << endl << "Iti multumesc ca ai parcurs aceasta minunata aventura impreuna cu mine si sper ca o sa te bucur si de urmatoarele pe care o sa le concep.";
                                                }
                     
                                    }

                            }
                        }
                        else
                        {
                            cout << endl << "Deci vrei sa mergi singur prin intuneric.";
                            cout << endl << "Na pai, imi pare rau sa iti zic, dar te-ai pierdut.";
                            cout << endl << "Ala e lup?";
                            cout << endl << "Nu stiu, dar vine catre tine";
                            cout << endl << "Ai murit.";
                        }
                    }
                
            }
            else
            {
                cout << endl << "Ai spus o gluma rasista care a enervat clarvazatoarea.";
                cout << endl << "Acum esti o broasca";
            }
        }
        else
        {
            cout << endl << "Ai spus o gluma rasista care a enervat clarvazatoarea.";
            cout << endl << "Acum esti o broasca";
        }
    }
    else
    {
        cout << endl << "Ai considerat visul neimportant si te-ai pus inapoi la somn.";
    }
}

