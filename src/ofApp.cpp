#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(ofColor::darkGreen);
    font.loadFont("OCRAEXT.TTF", 8);


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
            font.drawString(" \n I can�t feel \n my own self \n \n all there is \n is stinging, tired eyes \n \n a heart that beats too fast \n \n can�t stop twitching \n bounce bounce bounce bounce bounce \n \n �stop that� \n they say \n �why do you do that� \n they say \n \n i can�t stop it \n i don�t know \n \n why my legs won�t stop moving \n why my skin is torn and bloodied \n why a pack of gum lasts half a day \n why \n can�t \n i \n sleep \n \n the thoughts racing and rushing on branches of tangents \n of the distraction from what i was so desperately trying to focus on \n \n overstimulated and oversensitive and \n a startle response ready to flip the switch to \n \n PANIC \n \n at the (s)lightest provocation \n \n �you�re so jumpy� \n \n i know \n please don�t mention it \n \n i hate \n \n how i must steel myself for battle every time i enter a room \n how i must wrestle my own senses into submission to be able to function \n how i fear the people i trust the most \n how i feel most able to be a person when i think i am dead \n \n i am a reprogrammed soul \n piloting a mechanically frustrating corpse \n trying desperately to fix the bugs in my code \n but i don�t know this language \n and there is no shell \n no documentation \n so the medicated hotfixes will have to do \n until i learn how to undo \n the damage \n he did",
                              ofGetWidth()/3, 10);
            font.drawString("CLICK FOR SOLUTION DEMONSTRATION",ofGetWidth()/3, ofGetHeight()*14/15);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    ofExit();

    }



//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
