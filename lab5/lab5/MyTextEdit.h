#include <string>
#include "TextEditor.h"
using namespace std;

class Action {
public:
    string type;
    char character;

    Action() {}
    Action(string t, char c) {
        type = t;
        character = c;
    }
};
class TextEditor {
private:
    string text;
    Stack<Action> undoStack;
    Stack<Action> redoStack;

public:
    TextEditor();
    void typeCharacter(char c);
    void deleteCharacter();
    void undo();
    void redo();
    void showText();
};
TextEditor::TextEditor() : undoStack(100), redoStack(100) {
    text = "";
}

void TextEditor::typeCharacter(char c) {
    text += c;
    undoStack.push(Action("type", c));
    redoStack.clear();  // Clear redo on new action
}

void TextEditor::deleteCharacter() {
    if (!text.empty()) {
        char removed = text.back();
        text.pop_back();
        undoStack.push(Action("delete", removed));
        redoStack.clear();
    }
    else {
        cout << "Nothing to delete!\n";
    }
}

void TextEditor::undo() {
    if (!undoStack.isEmpty()) {
        Action last = undoStack.pop();
        if (last.type == "type") {
            if (!text.empty()) text.pop_back();
            redoStack.push(last);
        }
        else if (last.type == "delete") {
            text += last.character;
            redoStack.push(last);
        }
    }
    else {
        cout << "Nothing to undo.\n";
    }
}

void TextEditor::redo() {
    if (!redoStack.isEmpty()) {
        Action last = redoStack.pop();
        if (last.type == "type") {
            text += last.character;
            undoStack.push(last);
        }
        else if (last.type == "delete") {
            if (!text.empty()) text.pop_back();
            undoStack.push(last);
        }
    }
    else {
        cout << "Nothing to redo.\n";
    }
}

void TextEditor::showText() {
    cout << "Current Text: \"" << text << "\"\n";
}
