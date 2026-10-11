
#include <iostream>
#include <string>

double calcularImc(double pesoKg, double estaturaM) {
    return pesoKg / (estaturaM * estaturaM);
}

std::string clasificarImc(double imc) {
    if (imc < 18.5) {
        return "Bajo peso";
    } else if (imc < 25.0) {
        return "Normal";
    } else if (imc < 30.0) {
        return "Sobrepeso";
    }
    return "Obesidad";
}

double librasAKilogramos(double libras) {
    return libras * 0.4536;
}

int main() {
    double peso, estatura, libras;

    std::cout << "Peso (kg): ";
    std::cin >> peso;

    std::cout << "Estatura (m): ";
    std::cin >> estatura;

    double imc = calcularImc(peso, estatura);

    std::cout << "IMC: " << imc
              << " (" << clasificarImc(imc)
              << ")" << std::endl;

    std::cout << "Peso en libras: ";
    std::cin >> libras;

    std::cout << "Peso en kilogramos: "
              << librasAKilogramos(libras)
              << std::endl;

    return 0;
}
