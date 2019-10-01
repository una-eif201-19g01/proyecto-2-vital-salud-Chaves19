/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
using namespace std;

int main() {
    int menu, submenu1, submenu2, submenu3, submenu4;

    //MODULARIZAR
    
    cout << "MENU PRINCIPAL GIMNASIO VITAL SALUD" << endl;
    cout << "   * Bienvenido al sistema del gimnasio VITAL SALUD: *" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    cout << "   * 1. Mantenimiento " << endl;
    cout << "   * 2. Asignar instructores " << endl;
    cout << "   * 3. Seguimiento" << endl;
    cout << "   * 4. Visualizacion" << endl;
    cout << "   * 5. Salir del sistema" << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cout << "   * Ingrese su seleccion: " << endl;
    cout << "-----------------------------------------------------------------------------------------" << endl;
    cin>>menu;
    cout << endl;
    
    switch (menu) {
        case 1:
            do {
                cout << "------------------------------------------------------------------------" << endl;
                cout << "   * Bienvenido al sistema de Mantenimiento *  " << endl;
                cout << "------------------------------------------------------------------------" << endl;
                cout << "   * 1. Ingresar instructores" << endl;
                cout << "   * 2. Ingresar Socios" << endl;
                cout << "   * 3. Volver al Menu Principal" << endl;
                cout << "------------------------------------------------------------------------" << endl;
                cin>>submenu1;
                switch (submenu1) {
                    case 1:

                        cout << "------------------------------------------------------------------------" << endl;
                        cout << "   * Ingrese los datos del instructor:  " << endl;
                        cout << "------------------------------------------------------------------------" << endl;
                        break;
                    case 2:

                        cout << "------------------------------------------------------------------------" << endl;
                        cout << "   * Ingrese los datos del Socio:  " << endl;
                        cout << "------------------------------------------------------------------------" << endl;
                        cout << "   * NombreCompleto:" << endl;
                        cin>>nombre;
                        cout << "   * Cedula:" << endl;
                        cin>>cedula;
                        cout << "   * Cprreo Electronico:" << endl;
                        cin>>correo;
                        cout << "   * Telefono:" << endl;
                        cin>>telefono;
                        cout << "   * Fecha de Inscripcion:" << endl;
                        cin>>fechaInscripcion;
                        socio1(nombre, cedula, correo, telefono, fechaInscripcion);
                        break;

                    case 3:
                        break;

                    default:
                        cout << "-----------------------------------------------------------------------------" << endl;
                        cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
                        cout << "   Vuelva a intentarlo" << endl;
                        cout << "-----------------------------------------------------------------------------" << endl;
                        cout << endl;
                        break;

                }
                while (submenu1 != 3);
        case 2:
            do {
                cout << "------------------------------------------------------------------------" << endl;
                cout << "   * Bienvenido al sistema de Asignamiento de instructores:  *" << endl;
                cout << "------------------------------------------------------------------------" << endl;
                cin>>submenu2;
                switch (submenu2) {
                    default:
                        cout << "-----------------------------------------------------------------------------" << endl;
                        cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
                        cout << "   Vuelva a intentarlo" << endl;
                        cout << "-----------------------------------------------------------------------------" << endl;
                        cout << endl;
                        break;
                }
            } while (submenu2 != 1);

        case 3:
            do {
                cout << "------------------------------------------------------------------------" << endl;
                cout << "   * Bienvenido al sistema de Seguimiento de Socios:  *" << endl;
                cout << "------------------------------------------------------------------------" << endl;
                cin>>submenu3;
                switch (submenu3) {
                    default:
                        cout << "-----------------------------------------------------------------------------" << endl;
                        cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
                        cout << "   Vuelva a intentarlo" << endl;
                        cout << "-----------------------------------------------------------------------------" << endl;
                        cout << endl;
                        break;
                }
            } while (submenu3 != 1);
                break;

        case 4:
            do {
                    cout << "------------------------------------------------------------------------" << endl;
                    cout << "   * Bienvenido al sistema de Visualizacion *  " << endl;
                    cout << "------------------------------------------------------------------------" << endl;
                    cout << "   * 1. Visualizar Socios" << endl;
                    cout << "   * 2. Visualizar Instructores" << endl;
                    cout << "   * 3. Visualizar Clase por Salon" << endl;
                    cout << "   * 4. Visualizar Socios por Clase" << endl;
                    cout << "   * 5. Visualizar Clases Especificas" << endl;
                    cout << "   * 6. Volver al Menu Principal" << endl;
                    cout << "------------------------------------------------------------------------" << endl;
                    cin>>submenu4;
                    switch (submenu4) {
                        case 1:

                            cout << "------------------------------------------------------------------------" << endl;
                            cout << "   * Visualizar Socios:  " << endl;
                            cout << "------------------------------------------------------------------------" << endl;
                            break;

                        case 2:

                            cout << "------------------------------------------------------------------------" << endl;
                            cout << "   * Visualizar Instructores:  " << endl;
                            cout << "------------------------------------------------------------------------" << endl;

                            break;

                        case 3:

                            cout << "------------------------------------------------------------------------" << endl;
                            cout << "   * Visualizar Clase por Salon:  " << endl;
                            cout << "------------------------------------------------------------------------" << endl;

                            break;

                        case 4:

                            cout << "------------------------------------------------------------------------" << endl;
                            cout << "   * Visualizar Socios por Clase:  " << endl;
                            cout << "------------------------------------------------------------------------" << endl;

                            break;

                        case 5:

                            cout << "------------------------------------------------------------------------" << endl;
                            cout << "   * Visualizar Clases Especificas:  " << endl;
                            cout << "------------------------------------------------------------------------" << endl;

                            break;

                        case 6:
                            break;

                        default:
                            cout << "-----------------------------------------------------------------------------" << endl;
                            cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
                            cout << "   Vuelva a intentarlo" << endl;
                            cout << "-----------------------------------------------------------------------------" << endl;
                            cout << endl;
                            break;

                    }
                    while (submenu4 != 6);
                    case 2:
                    do {
                        cout << "------------------------------------------------------------------------" << endl;
                        cout << "   * Bienvenido al sistema de Asignamiento de instructores:  *" << endl;
                        cout << "------------------------------------------------------------------------" << endl;
                        cin>>submenu2;
                        switch (submenu2) {

                            default:
                                cout << "-----------------------------------------------------------------------------" << endl;
                                cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
                                cout << "   Vuelva a intentarlo" << endl;
                                cout << "-----------------------------------------------------------------------------" << endl;
                                cout << endl;
                                break;
                        }
                    } while (submenu2 != 1);

                    break;
                    case 5:
                    break;
                    default:
                    cout << "-----------------------------------------------------------------------------" << endl;
                    cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
                    cout << "   Vuelva a intentarlo" << endl;
                    cout << "-----------------------------------------------------------------------------" << endl;
                    cout << endl;
                    break;
                }while (submenu4 != 5);
        }while (menu != 5);
    }
}

void menu(){
    std::string reporte;
    int menu;
    reporte = reporte + "MENU PRINCIPAL GIMNASIO VITAL SALUD \n" +
    "   * Bienvenido al sistema del gimnasio VITAL SALUD: *\n" +
    "---------------------------------------------------------------------------------------- \n" +
    "   * 1. Mantenimiento \n" +
    "   * 2. Asignar instructores \n" +
    "   * 3. Seguimiento \n" +
    "   * 4. Visualizacion \n" +
    "   * 5. Salir del sistema \n" +
    "----------------------------------------------------------------------------------------- \n" +
    "   * Ingrese su seleccion: \n"
    "----------------------------------------------------------------------------------------- \n";
    cin>>menu;
    
    switch (menu) {
        do{
            case 1: 
                void submenu1();
                break;
                
            case 2: 
                void submenu2();
                break;
                
            case 3: 
                void submenu3();
                break;
                
            case 4: 
                void submenu4();
                break;
                
            case 5:
                return 0;
                break;
                
            default: " ";
                break;
                
        
        }while (menu != 5);    
    }
}
void submenu1(){
    do {
        std::string reporte2;
    
        reporte2 = reporte2 + "------------------------------------------------------------------------ \n" +
        "   * Bienvenido al sistema de Mantenimiento *  \n" +
        "------------------------------------------------------------------------ \n" +
        "   * 1. Ingresar instructores \n" +
        "   * 2. Ingresar Socios \n" +
        "   * 3. Volver al Menu Principal \n" +
        "------------------------------------------------------------------------\n" +
        cin>>submenu1;
            switch (submenu1) {
                case 1:

                        cout << "------------------------------------------------------------------------" << endl;
                        cout << "   * Ingrese los datos del instructor:  " << endl;
                        cout << "------------------------------------------------------------------------" << endl;
                        break;
                    case 2:

                        cout << "------------------------------------------------------------------------" << endl;
                        cout << "   * Ingrese los datos del Socio:  " << endl;
                        cout << "------------------------------------------------------------------------" << endl;
                        cout << "   * NombreCompleto:" << endl;
                        cin>>nombre;
                        cout << "   * Cedula:" << endl;
                        cin>>cedula;
                        cout << "   * Correo Electronico:" << endl;
                        cin>>correo;
                        cout << "   * Telefono:" << endl;
                        cin>>telefono;
                        cout << "   * Fecha de Inscripcion:" << endl;
                        cin>>fechaInscripcion;
                        socio1(nombre, cedula, correo, telefono, fechaInscripcion);
                        break;

                    case 3:
                        break;

                    default:
                        cout << "-----------------------------------------------------------------------------" << endl;
                        cout << " * Ingreso un numero que no corresponde a ninguna de las opciones posibles," << endl;
                        cout << "   Vuelva a intentarlo" << endl;
                        cout << "-----------------------------------------------------------------------------" << endl;
                        cout << endl;
                        break;

            }
                
    }while (submenu1 != 3);
}
void submenu2(){
    
}
void submenu3(){
    
}
void submenu4(){
    
}