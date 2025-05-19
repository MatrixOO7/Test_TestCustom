#ifndef CUSTOMELEMENT_H
#define CUSTOMELEMENT_H

#include <QQuickItem>
#include <QObject>
#include <QQmlEngine>

class CustomElement : public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT

public:
    explicit CustomElement(QQuickItem *parent = nullptr);
  //  explicit CustomElement(QObject *parent = nullptr);
};

#endif // CUSTOMELEMENT_H
