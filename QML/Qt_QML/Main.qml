import QtQuick

Window {
    id: root

    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {

        id: button1

        property color baseColor: "red"

        anchors {
            bottom: parent.verticalCenter
            horizontalCenter: parent.horizontalCenter
            bottomMargin: 20
        }

        width: 150
        height: 50

        color: if (buttonMouseArea.containsPress) {
                   return Qt.darker(baseColor)
               } else if (buttonMouseArea.containsMouse) {
                   return Qt.lighter(baseColor)
               } else {
                   return baseColor
               }

        Text {
            id: buttonText1

            anchors.centerIn: parent
            text: "Click me!"
        }

        MouseArea {
            id: buttonMouseArea

            anchors.fill: parent

            hoverEnabled: true

            onClicked: {
                button1.baseColor = "orange"
            }
        }
    }

    Rectangle {

        property color baseColor: "#00FF00"

        anchors {
            top: parent.verticalCenter
            horizontalCenter: parent.horizontalCenter
            topMargin: 20
        }

        width: 150
        height: 50

        color: if (buttonMouseArea2.containsPress) {
                   return Qt.darker(baseColor)
               } else if (buttonMouseArea2.containsMouse) {
                   return Qt.lighter(baseColor)
               } else {
                   return baseColor
               }

        Text {
            id: buttonText2

            anchors.centerIn: parent
            text: "Close app"
        }

        MouseArea {
            id: buttonMouseArea2

            anchors.fill: parent

            hoverEnabled: true

            onClicked: {
                Qt.quit()
            }
        }
    }

    Connections {
        target: buttonMouseArea2

        function onClicked() {
            console.log("Button 2 clicked, exit")
        }
    }
}
