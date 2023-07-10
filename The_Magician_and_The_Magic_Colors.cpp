#include <iostream>
#include <stack>
using namespace std;

char mixColors(char color1, char color2) {
    if (color1 == color2) {
        return '\0'; // Colors vanish if they are the same
        
    } else if ((color1 == 'R' && color2 == 'B') || (color1 == 'B' && color2 == 'R')) {
        return 'P'; // Red + Blue = Purple
    } else if ((color1 == 'R' && color2 == 'G') || (color1 == 'G' && color2 == 'R')) {
        return 'Y'; // Red + Green = Yellow
    } else if ((color1 == 'B' && color2 == 'G') || (color1 == 'G' && color2 == 'B')) {
        return 'C'; // Blue + Green = Cyan
    } else {
        return '\0'; // Colors do not mix, return empty character
    }
}

string mixColorsInBox(const string& colors) {
    stack<char> colorStack;

    for (char color : colors) {
        if (!colorStack.empty()) {
            char mixedColor = mixColors(colorStack.top(), color);
            if (mixedColor != '\0') {
                colorStack.pop();
                colorStack.push(mixedColor);
                continue;
            }
        }
        colorStack.push(color);
    }

    string finalColors;
    while (!colorStack.empty()) {
        if(colorStack != finalColors){
             finalColors = colorStack.top() + finalColors;
        colorStack.pop();
        }
       
    }

    return finalColors;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string colors;
        cin >> colors;

        string finalColors = mixColorsInBox(colors);

        cout << finalColors << endl;
    }

    return 0;
}
