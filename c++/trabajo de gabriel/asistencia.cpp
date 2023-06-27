#include <iostream>
#include <fstream> //para usar ifstream y ofstream
#include <string>  //para usar getline entre otras cosas
#include <sstream> // para que funcione la transformacion a string
using namespace std;

struct Asistencia
{
    string DNI;
    string Name;          // Nombre
    string Career;        // Carrera
    string Subject;       // Materia
    string Date;          // Fecha
    string Hour;          // Hora
    int AttendanceStatus; // Presente
};

int option;
void createOrReadCSVFile(); // Crea o lee el file csv
void openMenu();            // menu de opciones
void takeAttendance();      // funcion de carga de asistencia
void attendanceRecords();   // funcion de consultar asistencia

int main(int argc, char const *argv[])
{
    createOrReadCSVFile();

    return 0;
}
void createOrReadCSVFile() // codigo de la funcion de crear o leer el file csv
{
    ifstream mifileCSV; // lee si existe el file(archivo) csv

    mifileCSV.open("asistencia.csv"); // abre el file csv
    if (mifileCSV.is_open())
    {
        mifileCSV.close();
        openMenu(); // despliega el menu
    }
    else
    {
        ofstream mifileCSV2;                                                        // crea file csv en caso de no existir
        mifileCSV2.open("asistencia.csv");                                          // abre el file csv
        mifileCSV2 << "DNI;Nombre;Carrera;Materia;Fecha;Hora;EstadoDeAsistencia\n"; // formato de la hoja de calculo
        mifileCSV2.close();
        openMenu(); // despliega el menu
    }
}

void openMenu() // codigo de la funcion menu
{

    cout << "Oprima 1 para tomar asistencia" << endl;
    cout << "Oprima 2 para para consultar la asistencia de un student" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        cin.ignore();
        takeAttendance(); // Llama a la funcion de toma de asistencia

        break;

    case 2:
        cin.ignore();
        attendanceRecords(); // llama a la funcion que consulta la asistencia de un student

        break;

    default:
        break;
    }
}

void takeAttendance() // codigo de la funcion de toma de asistencia
{                     /*/*Recordatorio de la consigna:Por ejemplo al iniciar la opción de toma de asistencia, me pide la carrera, el año, la materia y fecha de asistencia.*/
    int materia = 0;
    Asistencia student;                        // crea la asistencia del student
    ofstream file{"asistencia.csv", ios::app}; // el metodo append añade los datos al final de la lista
    if (file.is_open())
    { // a partir de aca y si el file esta abierto, se piden los datos a rellenar en la plantilla y luego el usuario los ingresa
        cin.ignore();
        cout << "Ingrese el DNI del student: "; // muestra por pantalla la frase
        getline(cin, student.DNI);              // ingresa manualmente el del dni

        cout << "Ingrese el nombre del student: ";
        getline(cin, student.Name); // ingresa manualmente el nombre del estudiante

        cout << "Ingrese la carrera: ";
        getline(cin, student.Career); // ingresa la carrera

        cout << "Ingrese la materia\n";
        cout << "#1 materia1\n";
        cout << "#2 materia2\n";
        cout << "#3 materia3\n";
        cout << "#4 materia4\n";
        cin >> materia; // ingresa el numero elegido de las opciones desplegadas
        switch (materia)
        {
        case 1:
            student.Subject = "materia1"; // en caso que el numero sea 1, la string se rellena con "materia1". Lo mismo para las de abajo con su respectivo numero

            break;
        case 2:
            student.Subject = "materia2";
            break;
        case 3:
            student.Subject = "materia3";
            break;
        case 4:
            student.Subject = "materia4";
            break;
        default:
            break;
        }
        cin.ignore();
        cout << "Ingrese la fecha de asistencia: ";
        getline(cin, student.Date);
        cout << "Ingrese la hora de asistencia: ";
        getline(cin, student.Hour);
        cout << "Ingrese el presente, #1 para presente #0 para ausente : ";
        cin >> student.AttendanceStatus;

        file << student.DNI; // a partir de aca se escriben los datos en el file csv
        file << ";";
        file << student.Name;
        file << ";";
        file << student.Career;
        file << ";";
        file << student.Subject;
        file << ";";
        file << student.Date;
        file << ";";
        file << student.Hour;
        file << ";";
        file << student.AttendanceStatus;
        file << "\n";
    }
    file.close(); // cierre del file
}
void attendanceRecords()
{
    // Asistencia student;                                /*Recordatorio de la consigna: Luego puedo  */
    string dni, materia, linea; // variables donde almaceno los datos ingresados abajo para poder comparar con los del archivo abierto
    int subjectOption, asistencia = 1,asistencias_totales = 0, asistencias_presente = 0, porcentaje_asistencia= 0;;

    ifstream inFile("asistencia.csv");

    if (!inFile.is_open()) // checkeo que el csv este abierto
    {
        cout << "No se pudo abrir el archivo" << endl;
    }
    cout << "Introduce el DNI del estudiante: ";
    cin >> dni;                     // lee el dni ingresado para poder buscar la asistencia del estudiante
    cout << "Ingrese la materia\n"; // hecho otra vez con switch para evitar problemas de mayusculas, minusculas, o errores de ortografia al ingresar una materia
    cout << "#1 materia1\n";
    cout << "#2 materia2\n";
    cout << "#3 materia3\n";
    cout << "#4 materia4\n";
    cin >> subjectOption; // ingresa el numero elegido de las opciones desplegadas, codigo reusado, podria haberlo hecho otra funcion
    switch (subjectOption)
    {
    case 1:
        materia = "materia1"; // en caso que el numero sea 1, la string se rellena con "materia1". Lo mismo para las de abajo con su respectivo numero

        break;
    case 2:
        materia = "materia2";
        break;
    case 3:
        materia = "materia3";
        break;
    case 4:
        materia = "materia4";
        break;
    }
    cin.ignore();
    
    while (getline(inFile, linea)) // busca linea por linea las variables coincidentes
    {
        stringstream stringtransforma3(linea);
        string dniString, materiaString, nombreString, carreraString, fechaString, horaString, asistenciaString;

        getline(stringtransforma3, dniString, ';');    // me toma hasta el primer punto y coma, y deja el ward ahi. Simil punteros
        getline(stringtransforma3, nombreString, ';'); // lo mismo que la anterior pero con el ward en la segunda coma
        getline(stringtransforma3, carreraString, ';');
        getline(stringtransforma3, materiaString, ';');
        getline(stringtransforma3, fechaString, ';');
        getline(stringtransforma3, horaString, ';');
        getline(stringtransforma3, asistenciaString, ';');

        if (dniString == dni && materiaString == materia) // evalua que la materia y el dni sean iguales a los ingresados

        {
            if (asistenciaString == "1")

            {
                asistencias_totales += 1; // suma una asistencia al total de posibles

                asistencias_presente += 1; // suma una asistencia al total de posibles

                cout<<"Asistencia registrada el dia "<< fechaString<< "a la hora "<< horaString <<endl;//por cada vuelta muestra la fecha y hora
            }
            else if (asistenciaString == "0")
            {
                asistencias_totales += 1;
            }
        }
    }
    cout << "El alumno asistio un total de " << asistencias_presente << " veces de " << asistencias_totales << " clases" <<"\n" << "Su porcentaje de asistencia es de " << asistencias_presente*100/asistencias_totales <<" %"<< endl;

    inFile.close();
}