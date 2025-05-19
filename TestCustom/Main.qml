import QtQuick
import Custom

Window {
    id: window
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    //color: "transparent"
    color: "gray"

    Rectangle {
        width: 50
        height: 50
        color: "red"
    }

    CustomElement {
        id: my
    }

    CustomElement {
        id: my2
    }
}
