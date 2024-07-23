import QtQuick
import QtQuick.Controls

Rectangle
{
    id: root;
    
    property bool hidden: true;

    signal accepted(string value);

    color: "#1e1e1e";
    border.color: searchInput.activeFocus ? Qt.lighter("#5F8575") : "transparent";
    border.width: 1;

    opacity:  enabled ? 1: 0.6;

    TextInput
    {
        id: searchInput;

        anchors.fill: parent;

        font.pixelSize: 14;
        color: "white";

        leftPadding: 30;
        verticalAlignment: TextInput.AlignVCenter;

        Image
        {
            anchors.left: parent.left;
            anchors.leftMargin: 5;
            anchors.verticalCenter: parent.verticalCenter;

            width: 16;
            height: 16;

            mipmap: true;
            source: "qrc:/QML_modules/SongPlayer/images/search_icon.png";
        }

        onAccepted: root.accepted(text);
    }
}