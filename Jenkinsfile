pipeline {
  agent any
  stages {
    stage('master') {
      steps {
        git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
      }
    }

    stage('QtBuild') {
      post {
        success {
          archiveArtifacts 'QtBuild/Makefile'
        }

      }
      steps {
        sh './buildScript.sh'
      }
    }

    stage('Qt Unit Test') {
      post {
        always {
          junit '*.xml'
        }

      }
      steps {
        script {
          wrap([$class: 'Xvfb', screen: '1920x1080x24']) {
            sh './testScript.sh'
          }
        }
      }
    }
  }
}
