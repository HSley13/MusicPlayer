import QtQuick
import QtQuick.Controls
import QtQuick.Window

import com.company.PlayerController
import com.company.AudioSearchModel

Window 
{
    id: root;
    visible: true;
    width: 480;
    height: 640;
    color: "gray";
    title: qsTr("Song Player");

    Rectangle 
    {
        id: topBar;

        anchors.top: parent.top;
        anchors.left: parent.left;
        anchors.right: parent.right;
        
        height: 50;
        color: "#5F8564";

        SearchField 
        {
            anchors.left: parent.left;
            anchors.right: closeSearchButton.left;
            anchors.verticalCenter: parent.verticalCenter;
            anchors.margins: 10;

            height: 30;

            visible: !searchPanel.hidden;
            enabled: !AudioSearchModel.isSearching

            onAccepted: (value) => 
            {
                AudioSearchModel.searchSong(value);
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

            source: "qrc:/QML_modules/SongPlayer/images/menu_icon.png";

            visible: searchPanel.hidden;

            onClicked: playlistPanel.hidden = !playlistPanel.hidden;
        }

        ImageButton 
        {
            id: closeSearchButton;

            anchors.right: parent.right;
            anchors.verticalCenter: parent.verticalCenter;
            anchors.rightMargin: 20;

            width: 32;
            height: 32;

            source: "qrc:/QML_modules/SongPlayer/images/close_icon.png";
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
            id: firstSong;

            anchors.left: parent.left;
            anchors.right: parent.right;
            anchors.verticalCenter: parent.verticalCenter;
            anchors.margins: 20;
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

            enabled: !!PlayerController.currentSong;
            opacity: enabled ? 1 : 0.3;

            ImageButton 
            {
                id: previousButton;

                anchors.verticalCenter: parent.verticalCenter;
                width: 30;
                height: 30;

                source: "qrc:/QML_modules/SongPlayer/images/previous_icon.png";

                onClicked: PlayerController.switchToPreviousSong();
            }

            ImageButton 
            {
                id: playPauseButton;

                anchors.verticalCenter: parent.verticalCenter;
                width: 50;
                height: 50;

                source: PlayerController.playing ? "qrc:/QML_modules/SongPlayer/images/pause_icon.png" : "qrc:/QML_modules/SongPlayer/images/play_icon.png";

                onClicked: PlayerController.playPause();
            }

            ImageButton 
            {
                id: nextButton;

                anchors.verticalCenter: parent.verticalCenter;
                width: 30;
                height: 30;

                source: "qrc:/QML_modules/SongPlayer/images/next_icon.png";

                onClicked: PlayerController.switchToNextSong()
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