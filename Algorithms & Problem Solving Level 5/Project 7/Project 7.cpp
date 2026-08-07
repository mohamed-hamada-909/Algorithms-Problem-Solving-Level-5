#include <iostream>
#include "clsMyString.h"

using namespace std;

int main()
{
	cout << "\n\n\t\t\t\t\t\tUndo/Redo Project\n\n";

	clsMyString S1;

	cout << "\nS1 = " << S1.Value << "\n";

	S1.Value = "Mohamed";
	cout << "\nS1 = " << S1.Value << "\n";

	S1.Value = "Mohamed2";
	cout << "\nS1 = " << S1.Value << "\n";

	S1.Value = "Mohamed3";
	cout << "\nS1 = " << S1.Value << "\n";

	cout << "\n\nUndo:";
	cout << "\n__________\n";

	S1.Undo();
	cout << "\nS1 After Undo = " << S1.Value << "\n";

	S1.Undo();
	cout << "\nS1 After Undo = " << S1.Value << "\n";

	S1.Undo();
	cout << "\nS1 After Undo = " << S1.Value << "\n";

	cout << "\n\nRedo:";
	cout << "\n__________\n";

	S1.Redo();
	cout << "\nS1 After Redo = " << S1.Value << "\n";

	S1.Redo();
	cout << "\nS1 After Redo = " << S1.Value << "\n";

	S1.Redo();
	cout << "\nS1 After Redo = " << S1.Value << "\n";

	system("pause>0");
	return 0;
}