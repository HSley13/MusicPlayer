import QtQuick

Rectangle
{
    id: root;

    property bool hidden: true;

    signal searchRequested;

    width: 250;
    height: 400;

    color: "#333333";

    Text
    {
        id: playListText;

        anchors.left: parent.left;
        anchors.top: parent.top;
        anchors.margins: 10;

        text: "Playlist";
        color: "white";

        font.pixelSize: 20;
        font.bold: true;
    }

    ListView
    {
        id: listView;

        anchors.top: playListText.bottom;
        anchors.bottom: addButton.top;
        anchors.left: parent.left;
        anchors.right: parent.right;
        anchors.margins: 20;

        clip: true;
        model: playerController;
        spacing: 10;

        delegate: Rectangle
        {
            id: delegate;

            required property string audioTitle;
            required property string audioAuthorName;
            required property url audioSource;
            required property url audioImageSource;
            required property url audioVideoSource;
            required property int index;

            width: listView.width;
            height: 50;

            color: "#1e1e1e";

            Column
            {
                id: textsColumn;

                anchors.top: parent.top;
                anchors.left: parent.left;
                anchors.right: removeButton.left;
                anchors.margins: 5;

                spacing: 5;

                Text
                {
                    width: textsColumn.width;
                    elide: Text.ElideRight;
                    fontSizeMode: Text.Fit;
                    minimumPixelSize: 10;
                    color: "white";
                    text: delegate.audioTitle;

                    font.pixelSize: 20;
                    font.bold: true;
                }

                Text
                {
                    width: textsColumn.width;
                    elide: Text.ElideRight;
                    fontSizeMode: Text.Fit;
                    minimumPixelSize: 6;
                    color: "gray";
                    text: delegate.audioAuthorName;

                    font.pixelSize: 10;
                }
            }

            MouseArea
            {
                id: delegateMouseArea;

                anchors.fill: parent;
                
                onClicked: 
                {
                    playerController.switchToAudioByIndex(delegate.index);
                    playerController.playPause();
                }
            }

            ImageButton 
            {
                id: removeButton;

                anchors.right: parent.right;
                anchors.verticalCenter: parent.verticalCenter;
                anchors.rightMargin: 5;

                width: 30;
                height: 30;

                source: "qrc:/QML_modules/MusicPlayer/images/trash_icon.png";

                onClicked: playerController.removeAudio(delegate.index)
            }
        }
    }

    ImageButton 
    {
        id: addButton;

        anchors.left: parent.left;
        anchors.bottom: parent.bottom;
        anchors.margins: 20;

        width: 32;
        height: 32;

        source: "qrc:/QML_modules/MusicPlayer/images/add_icon.png";

        onClicked: 
        {
            root.searchRequested();
            root.hidden = true;
        }
    }

    Behavior on x
    {
        PropertyAnimation
        {
            easing.type: Easing.InOutQuad;
            duration: 200;
        }
    }
}