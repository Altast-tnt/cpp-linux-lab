import QtQuick
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    color: "lightyellow"

    GridLayout {
        anchors.fill: parent
        rows: 2
        columns: 2
        rowSpacing: 10
        columnSpacing: 10

        Item {
            Layout.fillHeight: true
            Layout.fillWidth: true

            Rectangle {
                width: 50
                height: 50
                color: "orange"
                x: 50
                y: 50
            }
        }

        Item {
            Layout.fillHeight: true
            Layout.fillWidth: true

            Rectangle {
                anchors {
                    top: parent.verticalCenter
                    left: parent.horizontalCenter
                }

                width: 100
                height: 75
                color: "darkred"
            }
        }

        Item {
            Layout.fillHeight: true
            Layout.fillWidth: true

            Flow {
                anchors.fill: parent

                spacing: 20

                Repeater {
                    model: 5

                    Rectangle {
                        width: 50
                        height: 50
                        color: "green"
                    }
                }
            }
        }

        Item {
            Layout.fillHeight: true
            Layout.fillWidth: true

            GridLayout {
                anchors.fill: parent

                rows: 2
                columns: 2

                rowSpacing: 20
                columnSpacing: 20

                Rectangle {
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    color: "black"
                }

                Rectangle {
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    color: "red"
                }

                Rectangle {
                    Layout.fillHeight: true
                    Layout.fillWidth: true
                    Layout.columnSpan: 2

                    color: "magenta"
                }
            }
        }
    }
}
