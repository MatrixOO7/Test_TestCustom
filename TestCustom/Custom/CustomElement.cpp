#include "CustomElement.h"

CustomElement::CustomElement(QQuickItem *parent)
    : QQuickItem(parent)

//CustomElement::CustomElement(QObject *parent)
//    : QObject(parent)
{
    // Příklad: můžeš zde nastavit rozměry nebo jiné výchozí chování
    setWidth(100);
    setHeight(100);
}
