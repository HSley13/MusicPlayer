import QtQuick
import QtMultimedia

Item 
{
  id: root;

  visible: !!playerController.currentSong;

  Image 
  {
    id: albumImage;

    anchors.verticalCenter: parent.verticalCenter;
    anchors.left: parent.left;

    width: 150;
    height: 150;

    source: !!playerController.currentSong ? playerController.currentSong.imageSource : "";
  }

  Video 
  {
    id: albumVideo;

    anchors.verticalCenter: parent.verticalCenter;
    anchors.left: parent.left;

    width: 150;
    height: 150;

    loops: MediaPlayer.Infinite;
    volume: 0;

    source: !!playerController.currentSong ? playerController.currentSong.videoSource : "";

    onSourceChanged: (source != "") ? play() : stop();
  }

  Text 
  {
    id: titleText;

    anchors.bottom: parent.verticalCenter;
    anchors.left: albumImage.right;
    anchors.margins: 20;
    anchors.right: parent.right;

    color: "white";
    wrapMode: Text.WrapAtWordBoundaryOrAnywhere;

    text: !!playerController.currentSong ? playerController.currentSong.title : "";

    font.pixelSize: 20;
    font.bold: true;
  }

  Text 
  {
    id: authorText;

    anchors.top: parent.verticalCenter;
    anchors.left: titleText.left;
    anchors.topMargin: 5;
    anchors.right: parent.right;

    color: "gray";
    wrapMode: Text.WrapAtWordBoundaryOrAnywhere;
    text: !!playerController.currentSong ? playerController.currentSong.authorName : "";

    font. pixelSize: 16;
  }

  onVisibleChanged: 
  {
      if (visible) 
          albumVideo.play();
      else 
      {
          albumVideo.seek(0);
          albumVideo.stop();
      }
  }
}
