#include <iostream>
#include <string>
#include <memory>
#include <cmath>

using namespace std;

class Figura {
public:
    virtual double obliczPole() const = 0;
    virtual string nazwa() const = 0;
    virtual ~Figura() = default;
};

class Kolo : public Figura {
    double r;
public:
    Kolo(double x) : r(x) {}
    double obliczPole() const override {
        return M_PI * r * r;
    }
    string nazwa() const override { return "Koło"; }
};

class Trojkat : public Figura {
    double a, h;
public:
    Trojkat(double x, double y) : a(x), h(y) {}
    double obliczPole() const override {
        return 0.5 * a * h;
    }
    string nazwa() const override { return "Trójkąt"; }
};

class Kwadrat : public Figura {
    double a;
public:
    Kwadrat(double x) : a(x) {}
    double obliczPole() const override {
        return a * a;
    }
    string nazwa() const override { return "Kwadrat"; }
};

class Prostokat : public Figura {
    double a, b;
public:
    Prostokat(double x, double y) : a(x), b(y) {}
    double obliczPole() const override {
        return a * b;
    }
    string nazwa() const override { return "Prostokąt"; }
};

class Romb : public Figura {
    double a, h;
public:
    Romb(double x, double y) : a(x), h(y) {}
    double obliczPole() const override {
        return a * h;
    }
    string nazwa() const override { return "Romb"; }
};

class Rownoleglobok : public Figura {
    double a, h;
public:
    Rownoleglobok(double x, double y) : a(x), h(y) {}
    double obliczPole() const override {
        return a * h;
    }
    string nazwa() const override { return "Równoległobok"; }
};

class FabrykaFigur {
public:
    static unique_ptr<Figura> stworzFigure() {
        int w;
        cout << "Ile wierzchołków ma figura (0 (koło), 3 lub 4): ";
        cin >> w;

        if (w == 0) {
            double r;
            cout << "Podaj promień: ";
            cin >> r;
            return make_unique<Kolo>(r);
        }

        if (w == 3) {
            double a, h;
            cout << "Podaj podstawę: ";
            cin >> a;
            cout << "Podaj wysokość: ";
            cin >> h;
            return make_unique<Trojkat>(a, h);
        }

        if (w == 4) {
            string rowne, proste;
            cout << "Czy wszystkie boki są równe? (t/n): ";
            cin >> rowne;
            cout << "Czy kąty są proste? (t/n): ";
            cin >> proste;

            bool bokiRowne = (rowne == "t" || rowne == "T");
            bool katyProste = (proste == "t" || proste == "T");

            if (bokiRowne && katyProste) {
                double a;
                cout << "Podaj bok kwadratu: ";
                cin >> a;
                return make_unique<Kwadrat>(a);
            }

            if (!bokiRowne && katyProste) {
                double a, b;
                cout << "Podaj bok A: ";
                cin >> a;
                cout << "Podaj bok B: ";
                cin >> b;
                return make_unique<Prostokat>(a, b);
            }

            if (bokiRowne && !katyProste) {
                double a, h;
                cout << "Podaj bok rombu: ";
                cin >> a;
                cout << "Podaj wysokość: ";
                cin >> h;
                return make_unique<Romb>(a, h);
            }

            if (!bokiRowne && !katyProste) {
                double a, h;
                cout << "Podaj podstawę równoległoboku: ";
                cin >> a;
                cout << "Podaj wysokość: ";
                cin >> h;
                return make_unique<Rownoleglobok>(a, h);
            }
        }

        return nullptr;
    }
};

int main() {
    cout << "--- Kalkulator pól figur ---" << endl;

    unique_ptr<Figura> f = FabrykaFigur::stworzFigure();

    if (f) {
        cout << "Figura: " << f->nazwa() << endl;
        cout << "Pole: " << f->obliczPole() << endl;
    } else {
        cout << "Nie rozpoznano figury." << endl;
    }

    return 0;
}
