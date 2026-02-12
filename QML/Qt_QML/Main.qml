import QtQuick

Window {
    id: root

    width: 800
    height: 600
    visible: true
    title: qsTr("Hello World")
    color: "blue"

    Rectangle {
        id: rectangle

        property bool iAmPretty: true

        signal mySignal

        anchors.centerIn: parent

        width: 50
        height: 100
        rotation: 50
        radius: 10
        color: mouseArea.containsPress ? "red" : "magenta"

        MouseArea {
            id: mouseArea

            anchors.fill: parent

            onClicked: {

                // do smth
            }
        }
    }
}
