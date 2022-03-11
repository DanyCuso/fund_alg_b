/****************************************
 *      Operadores Y Condiciones        *
 ****************************************/


// Temperatura con condiciones 
// frio: 16°
// caliente = 29°

int cold = 16;
int hot = 29;
int sofa = 7000;

int main (int argc, char** argv) {

    int inputTemp = atoi(argv[1]);
    int inputMoney = atoi (argv[2]);
    char inputName = argv[3][0];

    bool temp_condition = (inputTemp == frio);
    bool temp_condition2 = (inputTemp == caliente);
    bool canRobotMove = (inputTemp <= caliente);
    bool hasUserMoney = (inputMoney >= sofa);
    bool isTheMale = (inputName != 'F');

    if (canRobotMove) {
        //Robot.move (x_cord, y_cord);
    }
    else {
        //Robot.stop
    }

    if (hasUserMoney) {
        //Allow to buy
    }
    else {
        //Reject to buy
    }

    if (inputTemp <= 29) {
        //Robbot.move (x_cord, y_cord
    }
    return 0;
}