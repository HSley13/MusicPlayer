import QtQuick
import QtQuick.Controls
import QtQuick.Window
import MusicPlayer

Window 
{
    id: root;
    visible: true;
    width: 480;
    height: 640;
    color: "gray";
    title: qsTr("Song Player");

    AudioSearchModel
    { id: audioSearchModel}

    PlayerController
    {id: playerController}

    Rectangle 
    {
        id: topBar;

        anchors.top: parent.top;
        anchors.left: parent.left;
        anchors.right: parent.right;
        
        height: 50;
        color: "#5F8564";

        Text 
        {
            id: titleText;

            anchors.centerIn: parent;

            text: "Music Player";

            color: "white";
            wrapMode: Text.WrapAtWordBoundaryOrAnywhere;

            visible: !!searchPanel.hidden;

            font.pixelSize: 20;
            font.bold: true;
        }

        SearchField 
        {
            id: searchInput;

            anchors.left: parent.left;
            anchors.right: closeSearchButton.left;
            anchors.verticalCenter: parent.verticalCenter;
            anchors.margins: 10;

            height: 30;

            visible: !searchPanel.hidden;
            enabled: !audioSearchModel.isSearching

            onAccepted: (value) => 
            {
                audioSearchModel.searchSong(value);
                topBar.forceActiveFocus();
            }
        }

        ImageButton 
        {
            id: playlistIcon;

            anchors.right: parent.right;
            anchors.verticalCenter: parent.verticalCenter;
            anchors.rightMargin: 20;

            width: 32;
            height: 32;

            source: "qrc:/QML_modules/MusicPlayer/images/menu_icon.png";

            visible: searchPanel.hidden;

            onClicked:
            {
                playlistPanel.hidden = !playlistPanel.hidden;
                searchInput.inputField = "";
            } 
        }

        ImageButton 
        {
            id: closeSearchButton;

            anchors.right: parent.right;
            anchors.verticalCenter: parent.verticalCenter;
            anchors.rightMargin: 20;

            width: 32;
            height: 32;

            source: "qrc:/QML_modules/MusicPlayer/images/close_icon.png";
            visible: !searchPanel.hidden;

            onClicked: searchPanel.hidden = true;
        }
    }

    Rectangle
    {
        id: mainSection;

        anchors.top: topBar.bottom;
        anchors.bottom: bottomBar.top;
        anchors.left: parent.left;
        anchors.right: parent.right;

        color: "#1e1e1e";

        AudioInfoBox
        {
            anchors.left: parent.left;
            anchors.right: parent.right;
            anchors.verticalCenter: parent.verticalCenter;
            anchors.margins: 20;
        }

        MouseArea
        {
            anchors.fill: parent;

            onClicked: playlistPanel.hidden = true;
        }
    }

    Rectangle
    {
        id: bottomBar;

        anchors.bottom: parent.bottom;
        anchors.left: parent.left;
        anchors.right: parent.right;

        height: 100;
        color: "#333333";

        Row
        {
            anchors.centerIn: parent;
            spacing: 20;

            enabled: !!playerController.currentSong;
            opacity: enabled ? 1 : 0.3;

            ImageButton 
            {
                id: previousButton;

                anchors.verticalCenter: parent.verticalCenter;
                width: 30;
                height: 30;

                source: "qrc:/QML_modules/MusicPlayer/images/previous_icon.png";

                onClicked: playerController.switchToPreviousSong();
            }

            ImageButton 
            {
                id: playPauseButton;

                anchors.verticalCenter: parent.verticalCenter;
                width: 50;
                height: 50;

                source: playerController.playing ? "qrc:/QML_modules/MusicPlayer/images/pause_icon.png" : "qrc:/QML_modules/MusicPlayer/images/play_icon.png";

                onClicked: playerController.playPause();
            }

            ImageButton 
            {
                id: nextButton;

                anchors.verticalCenter: parent.verticalCenter;
                width: 30;
                height: 30;

                source: "qrc:/QML_modules/MusicPlayer/images/next_icon.png";

                onClicked: playerController.switchToNextSong();
            }

        }
    }

    PlayListPanel 
    {
        id: playlistPanel;

        anchors.top: topBar.bottom;

        x: hidden ? parent.width : parent.width - width;

        onSearchRequested: searchPanel.hidden = false;
    }

    SearchPanel
    {
        id: searchPanel;

        anchors.left: parent.left;
        anchors.right: parent.right;

        height: mainSection.height + bottomBar.height;

        y: hidden ? parent.height : topBar.height;
    }
}