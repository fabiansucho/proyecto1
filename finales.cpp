#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main() {
    const double efectivoInicial = 2521.50;
    const double tarjetaInicial = 27823.78;
    double efectivo = efectivoInicial;
    double tarjeta = tarjetaInicial;
    double total = 0.00;
    int opcion;
    int cantidad;
    cout<<"BIENVENIDO A BODEGA AURRERA";
    do {
        system("CLS");
        cout << "\t\t=== BODEGA AURRERA ===" << endl;
        cout << "1. PASILLO DE BEBIDAS" << endl;
        cout << "2. PASILLO DE DESPENSA" << endl;
        cout << "3. PASILLO DE BOTANAS" << endl;
        cout << "4. PASILLO DE LACTEOS" << endl;
        cout << "5. PASILLO DE LIMPIEZA" << endl;
        cout << "6. PASILLO DE HIGIENE PERSONAL" << endl;
        cout << "7. PASILLO DE ELECTRODOMESTICOS" << endl;
        cout << "8. RECARGAS DE TIEMPO AIRE" << endl;
        cout << "9. SECCION DE PANES"<< endl;
        cout << "10. TARJETAS DE REGALO" << endl;
        cout << "11. SECCION DE FRUTAS Y VERDURAS" << endl;
        cout << "12. SECCION DE MOTOS" << endl;
        cout << "13. PASILLO DE JUGETERIA" << endl;
        cout << "14. PASILLO DE CARNES" << endl;
        cout << "15. SECCION PARA VEHICULOS" << endl;
        cout << "16. PASILLO DE VINOS Y LICORES  " << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                system("CLS");
                cout << "=== PASILLO DE BEBIDAS ===" << endl;
                cout << "1. Agua 1.5L \t\t\t$12.00" << endl;
                cout << "2. CocaCola 600 ml \t\t$18.00" << endl;
                cout << "3. Fuze tea 600 ml \t\t$17.00" << endl;
                cout << "4. Pepsi 600 ml \t\t$15.00" << endl;
                cout << "5. Manzanita 600 ml \t\t$15.00" << endl;
                cout << "6. Power Rade 700 ml \t\t$19.00" << endl;
                cout << "7. Jugo del valle 600 ml \t$16.00" << endl;
                cout << "8. Gatorade 700 ml \t\t$16.50" << endl;
                cout << "9. Agua mineral 500 ml \t\t$10.50" << endl;
                cout << "10. Monster 455 ml \t\t$34.00" << endl;
                cout << "11. Red bull 250 ml \t\t$34.00" << endl;
                cout << "12. Fanta 600 ml\t\t\t$18.00" << endl;
                cout << "13. Fresca 600 ml \t\t\t$17.00" << endl;
                cout << "14. Sprite 600 ml \t\t\t$16.50" << endl;
                cout << "Ingresa la cantidad a comprar: ";
                cout <<  cantidad;
                cin >> cantidad;
                total += cantidad;
                break;
            case 2:
                system("CLS");
                cout << "=== PASILLO DE DESPENSA ===" << endl;
                cout << "1. Maruchan \t\t\t$12.50" << endl;
                cout << "2. Frijoles negros la costeña \t$15.00" << endl;
                cout << "3. Aceite capullo \t\t$72.00" << endl;
                cout << "4. Mayonesa \t\t\t$49.50" << endl;
                cout << "5. Cubos de rico pollo (caja) \t$18.00" << endl;
                cout << "6. Zucaritas 640 gr \t\t$55.50" << endl;
                cout << "7. Arroz 250 gr \t\t$22.00" << endl;
                cout << "Ingresa la cantidad a comprar: " << endl ;
                cout << cantidad;
                cin >> cantidad;
                total += cantidad * 12.50;
                break;
            case 3:
                system("CLS");
                cout << "=== PASILLO DE BOTANAS ===" << endl;
                cout << "1. Cacahuate enchilado \t\t$18.00" << endl;
                cout << "2. Papas pringles 124 gr \t$52.50" << endl;
                cout << "3. Doritos \t\t\t$16.00" << endl;
                cout << "4. Sabritas adobadas \t\t$16.00" << endl;
                cout << "5. Paketaxo \t\t\t$22.50" << endl;
                cout << "6. Rufles \t\t\t$15.00" << endl;
                cout << "7. Palomitas \t\t\t$12.00" << endl;
                cout << "8. Palomitas enchiladas \t$13.00" << endl;
                cout << "9. Sabritas saladas \t\t$17.00" << endl;
                cout << "Ingresa la cantidad a comprar: ";
                cout << cantidad;
                cin >> cantidad;
                total += cantidad * 18.00;
                break;
            case 4:
                system("CLS");
                cout << "=== PASILLO DE LACTEOS ===" << endl;
                cout << "1. Leche lala entera 1L \t\t$28.00" << endl;
                cout << "2. Carton de huevo blanco \t\t$85.00" << endl;
                cout << "3. Yogurt danup \t\t\t$17.50" << endl;
                cout << "4. Yogurt yoplayt 1L 750 gr \t$54.50" << endl;
                cout << "5. Crema lala deslactosada \t\t$43.00" << endl;
                cout << "Ingresa la cantidad a comprar: ";
                cout << cantidad;
                cin >> cantidad;
                total += cantidad * 28.00;
                break;
            case 5:
                system("CLS");
                cout << "=== PASILLO DE LIMPIEZA ===" << endl;
                cout << "1. Cloralex 2.5L \t\t\t$40.00" << endl;
                cout << "2. Detergente en polvo 123 \t\t$23.50" << endl;
                cout << "3. Detergente liquido MAS color \t$149.00" << endl;
                cout << "4. Detergente multiusos salvo \t\t$49.00" << endl;
                cout << "5. Pinol 3L \t\t\t\t$96.00" << endl;
                cout << "6. Fabuloso 1.5L \t\t\t$20.00" << endl;
                cout << "7. Papel higienico 12 rollos \t\t$62.00" << endl;
                cout << "Ingresa la cantidad a comprar: ";
                cout << cantidad;
                cin >> cantidad;
                total += cantidad * 40.00;
                break;
            case 6:
                system("CLS");
                cout << "=== PASILLO DE HIGIENE PERSONAL ===" << endl;
                cout << "1. Shampoo head&shoulders \t\t$74.00" << endl;
                cout << "2. Shampoo palmolive \t\t\t$80.50" << endl;
                cout << "3. Gel fijador de cabello \t\t$18.00" << endl;
                cout << "4. Crema nivea 400 ml \t\t$92.00" << endl;
                cout << "5. Desodorante AXE \t\t\t$64.00" << endl;
                cout << "6. Pasta dental colgate 12 piezas \t$101.00" << endl;
                cout << "7. Enjuague bucal listerine \t\t$131.00" << endl;
                cout << "Ingresa la cantidad a comprar: ";
                cout << cantidad;
                cin >> cantidad;
                total += cantidad * 74.00;
                break;
            case 7:
                system("CLS");
                cout << "=== PASILLO DE ELECTRODOMESTICOS ===" << endl;
                cout << "1. TV hisense 43 pulgadas FULL HD \t$4,890.00" << endl;
                cout << "2. Play station 5 \t\t\t$10,590.00" << endl;
                cout << "3. Xbox series s \t\t\t$4,990.00" << endl;
                cout << "4. Nintendo switch \t\t\t$6,190.00" << endl;
                cout << "5. Control inalambrico xbox \t\t$589.00" << endl;
                cout << "6. Motorola g42 4GB ram \t\t$3,490.00" << endl;
                cout << "7. Bocina kaiser 15 pulgadas \t\t$1,899.00" << endl;
                cout << "8. Licuadora Oster \t\t$1,999.00" << endl;
                cout << "Ingresa la cantidad a comprar: ";
                cout << cantidad;
                cin >> cantidad;
                total += cantidad * 4890.00;
                break;
           case 8:
                system("CLS");
                cout << "=== RECARGAS DE TIEMPO AIRE ===" << endl;
                cout << "1. Telcel" << endl;
                cout << "2. Movistar" << endl;
                cout << "3. Unefon" << endl;
                cout << "4. Virgin" << endl;
                cout << "5. Pillofon" << endl;
                cout << "Elige una compañía: ";
                int compania;
                cin >> compania;
                cout << "1. $10" << endl;
                cout << "2. $20" << endl;
                cout << "3. $30" << endl;
                cout << "4. $50" << endl;
                cout << "5. $100" << endl;
                cout << "6. $200" << endl;
                cout << "7. $500" << endl;
                cout << "Elige una cantidad: ";
                int cantidadRecarga;
                cin >> cantidadRecarga;
                double precioRecarga = 0.00;
    switch (compania) {
                case 1: // Telcel
                case 2: // Movistar
                case 3: // Unefon
                case 4: // Virgin
                case 5: // Pillofon
                    switch (cantidadRecarga) {
                        case 1:
                            precioRecarga = 10.00;
                            break;
                        case 2:
                            precioRecarga = 20.00;
                            break;
                        case 3:
                            precioRecarga = 30.00;
                            break;
                        case 4:
                            precioRecarga = 50.00;
                            break;
                        case 5:
                            precioRecarga = 100.00;
                            break;
                        case 6:
                            precioRecarga = 200.00;
                            break;
                        case 7:
                            precioRecarga = 500.00;
                            break;
                        default:
                                cout << "Opcion invalida" << endl;
                                break;
                        }
            break;
        default:
            cout << "Compania invalida" << endl;
            break;
    }
    if (precioRecarga > 0.00) {
        total += cantidadRecarga * precioRecarga;
        break;
    }
    break; 
                case 9:
                    system("CLS");
                    cout << "=== SECCION DE PANES ===" << endl;
                    cout << "1. Bolillos \t\t\t$4.25" << endl;
                    cout << "2. Concha diferentes sabores \t$7.15" << endl;
                    cout << "3. Pasteles \t\t\t$232.79" << endl;
                    cout << "4. Cuernos \t\t\t$7.15" << endl;
                    cout << "5. Rollo \t\t\t$9.17" << endl;
                    cout << "6. Charola de panes chiquitos \t$32.50" << endl;
                    cout << "7. Pan Bimbo Blanco \t\t$42.00" << endl;
                    cout << "8. Pan Bimbo Integral \t\t$50.00" << endl;
                    cout << "9. Pan Tostado \t\t\t$32.25" << endl;
                    cout << "Ingresa la opcion que necesitas: ";
                    cin >> opcion;

    switch (opcion) {
        case 1:
            total += 4.25;
            break;
        case 2:
            total += 7.15;
            break;
        case 3:
            total += 232.79;
            break;
        case 4:
            total += 7.15;
            break;
        case 5:
            total += 9.17;
            break;
        case 6:
            total += 32.50;
            break;
        case 7:
            total += 42.00;
            break;
        case 8:
            total += 50.00;
            break;
        case 9:
            total += 32.25;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    break;
                case 10:
                    system("CLS");
                    cout << "=== TARJETAS DE REGALO ===" << endl;
                    cout << "1. Google Play \t\t$100.00" << endl;
                    cout << "2. Google Play \t\t$200.00" << endl;
                    cout << "3. Google Play \t\t$300.00" << endl;
                    cout << "4. Google Play \t\t$500.00" << endl;
                    cout << "5. NetFlix \t\t$300.00" << endl;
                    cout << "6. Spotify \t\t$200.00" << endl;
                    cout << "7. Mario Kart \t\t$100.00" << endl;
                    cout << "8. Mario Kart \t\t$200.00" << endl;
                    cout << "9. Mario Kart \t\t$300.00" << endl;
                    cout << "10. Xbox One \t\t$200.00" << endl;
                    cout << "11. Xbox One \t\t$300.00" << endl;
                    cout << "12. Xbox One \t\t$500.00" << endl;
                    cout << "13. PlayStation Plus \t$200.00" << endl;
                    cout << "14. PlayStation Plus \t$300.00" << endl;
                    cout << "15. PlayStation Store \t$200.00" << endl;
                    cout << "16. PlayStation Store \t$300.00" << endl;
                    cout << "Ingresa la tarjeta que quieres: ";
                    cin >> cantidad;

    switch (cantidad) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            total += cantidad * 100.00;
            break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            total += cantidad * 200.00;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    break;
                case 11:
                    system("CLS");
                    cout << "=== SECCION DE FRUTAS Y VERDURAS ===" << endl;
                    cout << "1. Jitomate kl \t\t$28.00" << endl;
                    cout << "2. Calabazas kl \t$21.90" << endl;
                    cout << "3. Zanahoria kl \t$13.90" << endl;
                    cout << "4. Pimiento Morron kl \t$84.00" << endl;
                    cout << "5. Tomate kl \t\t$32.00" << endl;
                    cout << "6. Sandia kl \t\t$29.00" << endl;
                    cout << "7. Naranja kl \t\t$33.00" << endl;
                    cout << "8. Platanos \t\t$20.00" << endl;
                    cout << "9. Mandarina kl \t$17.00" << endl;
                    cout << "10. Manzana kl \t\t$22.25" << endl;
                    cout << "11. Cilantro gr \t$5.00" << endl;
                    cout << "12. Pepinos pz \t\t$17.00" << endl;
                    cout << "13. Limones kl \t\t$24.00" << endl;
                    cout << "14. Lima kl \t\t$45.10" << endl;
                    cout << "15. Apio gr \t\t$32.00" << endl;
                    cout << "16. Brocoli pz \t\t$26.00" << endl;
                    cout << "Ingresa la fruta o verdura que quieres: ";
                    cin >> cantidad;
    switch (cantidad) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            total += cantidad * 28.00;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    break;
                case 12:
                    system("CLS");
                    cout << "=== SECCION DE MOTOS ===" << endl;
                    cout << "1. Motocicleta Veloci Gps Defender\t$34,999.00" << endl;
                    cout << "2. Motocicleta Italika dt 150 Delivery\t$17,990.00" << endl;
                    cout << "3. Motocicleta Italika dt 125 Delivery\t$16,990.00" << endl;
                    cout << "4. Motocicleta Veloci Gps Hashback Sport\t$24,999.00" << endl;
                    cout << "5. Motocicleta Italika dt 150 Sport\t$24,990.00" << endl;
                    cout << "Ingresa la moto que quieres: ";
                    cin >> cantidad;

    switch (cantidad) {
        case 1:
            total += 34999.00;
            break;
        case 2:
            total += 17990.00;
            break;
        case 3:
            total += 16990.00;
            break;
        case 4:
            total += 24999.00;
            break;
        case 5:
            total += 24990.00;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    break;
                case 13:
                    system("CLS");
                    cout << "=== PASILLO DE JUGUETERIA ===" << endl;
                    cout << "1. Señora Cara De Papa \t$177.00" << endl;
                    cout << "2. Peluche Mattel Star Wars GROGU\t$399.90" << endl;
                    cout << "3. Uno Mattel\t$119.90" << endl;
                    cout << "4. Hot Wheels\t$23.25" << endl;
                    cout << "5. Figura de Accion de Spiderman\t$100.25" << endl;
                    cout << "6. Figura de Accion de Iron Man\t$100.25" << endl;
                    cout << "7. Figura de Accion de Thor\t$100.25" << endl;
                    cout << "8. Figura de Accion de Hulk\t$100.25" << endl;
                    cout << "9. Figura de Accion de Batman\t$100.25" << endl;
                    cout << "10. Balon de Futbol\t$120.00" << endl;
                    cout << "11. Balon de Basquetbol\t$130.00" << endl;
                    cout << "Selecciona el juguete que quieres: ";
                    cin >> cantidad;

    switch (cantidad) {
        case 1:
            total += 177.00;
            break;
        case 2:
            total += 399.90;
            break;
        case 3:
            total += 119.90;
            break;
        case 4:
            total += 23.25;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            total += 100.25;
            break;
        case 10:
            total += 120.00;
            break;
        case 11:
            total += 130.00;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    break;

              case 14:
                    system("CLS");
                    cout << "=== PASILLO DE CARNES ===" << endl;
                    cout << "1. Pollo Entero\t$37.00" << endl;
                    cout << "2. Pierna y Muslo de pollo kg\t$32.00" << endl;
                    cout << "3. Milanesa de Cerdo kg\t$88.00" << endl;
                    cout << "4. Filete de Pescado kg\t$78.00" << endl;
                    cout << "5. Carne Molida de Res kg\t$78.00" << endl;
                    cout << "6. Milanesa de Res kg\t$186.00" << endl;
                    cout << "7. Higado de Res 500gr\t$20.00" << endl;
                    cout << "8. Panza de Res kg\t$78.00" << endl;
                    cout << "9. Milanesa de Pechuga de Pollo kg\t$150.00" << endl;
                    cout << "10. Pierna de Cerdo kg\t$72.25" << endl;
                    cout << "11. Bisteck Asador kg\t$128.00" << endl;
                    cout << "12. Camaron Coctelero kg\t$158.00" << endl;
                    cout << "13. Mojarra kg\t$84.00" << endl;
                    cout << "14. Nuggets de Pollo kg\t$99.10" << endl;
                    cout << "15. Pechuga de Pollo 900gr\t$109.00" << endl;
                    cout << "16. Costilla de Res kg\t$114.00" << endl;
                    cout << "Ingresa la opcion de carne que quieres: ";
                    cin >> cantidad;

    switch (cantidad) {
        case 1:
            total += 37.00;
            break;
        case 2:
            total += 32.00;
            break;
        case 3:
            total += 88.00;
            break;
        case 4:
            total += 78.00;
            break;
        case 5:
        case 6:
        case 8:
            total += 78.00;
            break;
        case 7:
            total += 20.00;
            break;
        case 9:
            total += 150.00;
            break;
        case 10:
            total += 72.25;
            break;
        case 11:
            total += 128.00;
            break;
        case 12:
            total += 158.00;
            break;
        case 13:
            total += 84.00;
            break;
        case 14:
            total += 99.10;
            break;
        case 15:
            total += 109.00;
            break;
        case 16:
            total += 114.00;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    break;
                case 15:
                    system("CLS");
                    cout << "=== SECCION PARA VEHICULOS ===" << endl;
                    cout << "1. Aceite Mobile Super 5L\t\t\t$934.00" << endl;
                    cout << "2. Aceite Alto Kilometraje\t\t$77.00" << endl;
                    cout << "3. Aceite Para Transmision\t\t$76.00" << endl;
                    cout << "4. Aceite Para Motor \t\t$105.00" << endl;
                    cout << "5. Aceite Multigrado\t\t$159.00" << endl;
                    cout << "6. Llanta Grelander L-Grip \t$799.00" << endl;
                    cout << "7. Hidro Lavadora Electrica\t\t$1879.00" << endl;
                    cout << "8. Bateria Para Auto LTH\t\t$2189.00" << endl;
                    cout << "9. Abrillantador Para Llantas \t\t$52.00" << endl;
                    cout << "10. Calibrador De Caratula \t\t$62.00" << endl;
                    cout << "Ingresa la opcion que deseas: ";
                    cin >> cantidad;

    switch (cantidad) {
        case 1:
            total += 934.00;
            break;
        case 2:
            total += 77.00;
            break;
        case 3:
            total += 76.00;
            break;
        case 4:
            total += 105.00;
            break;
        case 5:
            total += 159.00;
            break;
        case 6:
            total += 799.00;
            break;
        case 7:
            total += 1879.00;
            break;
        case 8:
            total += 2189.00;
            break;
        case 9:
            total += 52.00;
            break;
        case 10:
            total += 62.00;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    break;
                case 16:
                    system("CLS");
                    cout << "=== SECCION DE VINOS Y LICORES ===" << endl;
                    cout << "1. Centenario Blanco 700 ml\t$265.00" << endl;
                    cout << "2. Ron The Kraken Negro 750 ml\t$271.00" << endl;
                    cout << "3. Vino Tinto Ferreira 750 ml\t$599.00" << endl;
                    cout << "4. Brandi Torres 10  700 ml\t$389.00" << endl;
                    cout << "5. Whisky Black y White 700 ml\t$265.00" << endl;
                    cout << "6. Whisky William Lawson`s\t$265.00" << endl;
                    cout << "7. Cabrito 950 ml\t$189.00" << endl;
                    cout << "8. Cerveza Modelo 560 ml\t$34.50" << endl;
                    cout << "9. Cerveza Victoria\t$32.25" << endl;
                    cout << "10. Azul\t$110.50" << endl;
                    cout << "11. Centenario Azul 700 ml\t$249.00" << endl;
                    cout << "Selecciona la opcion que deseas: ";
                    cin >> cantidad;

    switch (cantidad) {
        case 1:
            total += 265.00;
            break;
        case 2:
            total += 271.00;
            break;
        case 3:
            total += 599.00;
            break;
        case 4:
            total += 389.00;
            break;
        case 5:
            total += 265.00;
            break;
        case 6:
            total += 265.00;
            break;
        case 7:
            total += 189.00;
            break;
        case 8:
            total += 34.50;
            break;
        case 9:
            total += 32.25;
            break;
        case 10:
            total += 110.50;
            break;
        case 11:
            total += 249.00;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
    }
    break;
case 0:
default:
    cout << "Opcion invalida" << endl;
    break;
        cout << "\nPresiona Enter para continuar...";
cin.ignore();
cin.get();

} while (opcion != 0);
system("CLS");
cout << "=== RESUMEN DE COMPRA ===" << endl;
cout << "Total a pagar: $" << fixed << setprecision(2) << total << endl;
cout << "\n=== FORMA DE PAGO ===" << endl;
cout << "1. Pagar con tarjeta" << endl;
cout << "2. Pagar en efectivo" << endl;
cout << "Elige una opcion: ";
int formaPago;
cin >> formaPago;

double cambio = 0.00;

if (formaPago == 1) {
    if (total > tarjeta) {
        cout << "Saldo insuficiente en la tarjeta" << endl;
        formaPago = 2;
    } else {
        tarjeta -= total;
    }
}

if (formaPago == 2) {
    cout << "Ingresa la cantidad con la que vas a pagar: $";
    double pago;
    cin >> pago;

    if (pago < total) {
        cout << "Pago insuficiente" << endl;
    } else {
        cambio = pago - total;
        efectivo += pago;
    }
}
cout << "\n=== RESUMEN DE PAGO ===" << endl;
cout << "Total: $" << fixed << setprecision(2) << total << endl;
cout << "Efectivo: $" << fixed << setprecision(2) << efectivo << endl;
cout << "Tarjeta: $" << fixed << setprecision(2) << tarjeta << endl;
cout << "Cambio: $" << fixed << setprecision(2) << cambio << endl;
return 0;
}
}